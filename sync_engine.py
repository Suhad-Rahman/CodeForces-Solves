"""
Codeforces -> GitHub AC solution sync.

What it does on every run:
  1. Pulls the full submission history for CF_HANDLE via the official API.
  2. Reduces it to one Accepted submission per problem (earliest AC wins).
  3. Scans the repo's existing files and builds an "already have this" index,
     matching on (contestId, index) when the filename encodes it, and falling
     back to a normalized problem-name match for older files that don't.
  4. For every AC problem not already represented, scrapes the real source
     code from the submission page (the API does not expose source), writes
     it as a new file, and commits.
  5. Pushes once at the end.

Safety valve: set DRY_RUN=true (workflow_dispatch input or repo var) to only
print what WOULD be added/skipped, with no writes/commits/pushes. Run this
once after installing the script and read the output before trusting it —
the existing repo has ~100 files with no contest ID in the filename, so the
name-fallback matching deserves a human sanity check the first time.
"""

import os
import re
import sys
import time
import unicodedata
import requests

CF_HANDLE = os.environ.get("CF_HANDLE", "Suhad0")
DRY_RUN = os.environ.get("DRY_RUN", "false").lower() == "true"
MAX_NEW_PER_RUN = int(os.environ.get("MAX_NEW_PER_RUN", "0"))  # 0 = no limit
REQUEST_DELAY_SECONDS = 3  # be polite to codeforces.com when scraping

HEADERS = {
    # A plain requests UA gets blocked/served differently by CF sometimes.
    "User-Agent": (
        "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 "
        "(KHTML, like Gecko) Chrome/124.0 Safari/537.36"
    )
}

EXT_BY_LANG = {
    "c++": ".cpp",
    "gnu c": ".c",
    "python": ".py",
    "pypy": ".py",
    "java": ".java",
    "kotlin": ".kt",
    "go": ".go",
    "rust": ".rs",
    "c#": ".cs",
    "javascript": ".js",
}


def guess_extension(language: str) -> str:
    lang = (language or "").lower()
    for key, ext in EXT_BY_LANG.items():
        if key in lang:
            return ext
    return ".txt"


def normalize_name(name: str) -> str:
    """Lowercase, strip accents/punctuation, collapse whitespace."""
    name = unicodedata.normalize("NFKD", name)
    name = "".join(c for c in name if not unicodedata.combining(c))
    name = re.sub(r"[^a-z0-9]+", " ", name.lower())
    return name.strip()


def fetch_ac_submissions(handle: str):
    url = f"https://codeforces.com/api/user.status?handle={handle}"
    resp = requests.get(url, headers=HEADERS, timeout=20)
    resp.raise_for_status()
    data = resp.json()
    if data.get("status") != "OK":
        print(f"CF API error: {data.get('comment')}")
        return []

    by_problem = {}
    for sub in data["result"]:
        if sub.get("verdict") != "OK":
            continue
        prob = sub.get("problem", {})
        contest_id = prob.get("contestId")
        index = prob.get("index")
        if not contest_id or not index:
            continue  # gym/unusual problems without a stable id, skip safely
        key = (contest_id, index)
        # keep the earliest AC (first submission id ascending == earliest in CF's ordering)
        existing = by_problem.get(key)
        if existing is None or sub["id"] < existing["id"]:
            by_problem[key] = sub
    return list(by_problem.values())


def index_existing_files(repo_root: str):
    """
    Returns:
      by_id:   set of (contestId, index) parsed from filenames where possible
      by_name: set of normalized problem names parsed from filenames
    """
    by_id = set()
    by_name = set()

    id_pattern = re.compile(r"(\d{1,4})\s*[-_. ]*\s*([A-Z][0-9]{0,2})\b")

    for fname in os.listdir(repo_root):
        full = os.path.join(repo_root, fname)
        if not os.path.isfile(full):
            continue
        if fname.startswith("."):
            continue

        stem = os.path.splitext(fname)[0]

        m = id_pattern.search(stem)
        if m:
            contest_id = int(m.group(1))
            index = m.group(2)
            by_id.add((contest_id, index))

        # name fallback: strip leading "A. ", "problem_2125C___", numeric prefixes etc.
        cleaned = re.sub(r"^[A-Za-z0-9_.]*?[-_. ]+", "", stem)
        cleaned = re.sub(r"^[A-Z][0-9]{0,2}\.\s*", "", cleaned)
        by_name.add(normalize_name(cleaned))
        by_name.add(normalize_name(stem))  # also index the raw stem, cheap insurance

    return by_id, by_name


def already_have(sub, by_id, by_name):
    prob = sub["problem"]
    key = (prob["contestId"], prob["index"])
    if key in by_id:
        return True
    if normalize_name(prob.get("name", "")) in by_name:
        return True
    return False


def scrape_source(contest_id: int, submission_id: int):
    url = f"https://codeforces.com/contest/{contest_id}/submission/{submission_id}"
    resp = requests.get(url, headers=HEADERS, timeout=20)
    if resp.status_code != 200:
        return None
    match = re.search(
        r'<pre[^>]*id="program-source-text"[^>]*>(.*?)</pre>',
        resp.text,
        re.DOTALL,
    )
    if not match:
        return None
    raw = match.group(1)
    # unescape the handful of HTML entities CF actually uses here
    raw = (
        raw.replace("&lt;", "<")
        .replace("&gt;", ">")
        .replace("&quot;", '"')
        .replace("&#39;", "'")
        .replace("&amp;", "&")
    )
    return raw


def safe_filename_component(name: str) -> str:
    return "".join(c if c.isalnum() or c in " ._-'" else "_" for c in name).strip()


def main():
    repo_root = os.getcwd()

    print(f"Fetching AC submissions for handle: {CF_HANDLE}")
    ac_submissions = fetch_ac_submissions(CF_HANDLE)
    print(f"Found {len(ac_submissions)} unique AC problems on Codeforces.")

    by_id, by_name = index_existing_files(repo_root)
    print(f"Indexed existing repo: {len(by_id)} problems matched by ID, "
          f"{len(by_name)} normalized names on file.")

    to_add = [s for s in ac_submissions if not already_have(s, by_id, by_name)]
    # oldest first, so history reads chronologically in git log
    to_add.sort(key=lambda s: s["id"])

    print(f"{len(to_add)} problems appear to be missing from the repo.")

    if MAX_NEW_PER_RUN:
        to_add = to_add[:MAX_NEW_PER_RUN]
        print(f"Capping this run to {MAX_NEW_PER_RUN} problems.")

    if DRY_RUN:
        print("\n--- DRY RUN: would add ---")
        for s in to_add:
            p = s["problem"]
            print(f"  {p['contestId']}{p['index']} - {p.get('name')}  "
                  f"(submission {s['id']}, {s.get('programmingLanguage')})")
        print("--- end dry run, nothing written ---")
        return

    if not to_add:
        print("Nothing to do.")
        return

    added = 0
    for sub in to_add:
        prob = sub["problem"]
        contest_id = prob["contestId"]
        index = prob["index"]
        name = safe_filename_component(prob.get("name", "Unknown"))
        ext = guess_extension(sub.get("programmingLanguage", ""))
        filename = f"{contest_id}{index} - {name}{ext}"
        filepath = os.path.join(repo_root, filename)

        if os.path.exists(filepath):
            print(f"  skip (filename collision): {filename}")
            continue

        source = scrape_source(contest_id, sub["id"])
        time.sleep(REQUEST_DELAY_SECONDS)

        if source is None:
            print(f"  WARNING: could not scrape source for {contest_id}{index} "
                  f"(submission {sub['id']}), skipping this run")
            continue

        problem_url = f"https://codeforces.com/contest/{contest_id}/problem/{index}"
        comment_prefix = "//" if ext in (".cpp", ".c", ".java", ".js", ".kt", ".cs", ".go", ".rs") else "#"
        header = (
            f"{comment_prefix} Problem: {contest_id}{index} - {prob.get('name')}\n"
            f"{comment_prefix} Link: {problem_url}\n"
            f"{comment_prefix} Verdict: Accepted (submission {sub['id']})\n\n"
        )

        with open(filepath, "w", encoding="utf-8") as f:
            f.write(header + source)

        os.system(f'git add -- "{filename}"')
        added += 1
        print(f"  added: {filename}")

    if added == 0:
        print("No files were successfully added this run (see warnings above).")
        return

    os.system('git config user.name "Codeforces Sync Bot"')
    os.system('git config user.email "actions@github.com"')
    os.system(f'git commit -m "Sync: add {added} Codeforces AC solution(s)"')

    token = os.environ.get("GITHUB_TOKEN")
    repo = os.environ.get("GITHUB_REPOSITORY")
    if not token or not repo:
        print("Missing GITHUB_TOKEN or GITHUB_REPOSITORY, cannot push.")
        sys.exit(1)

    remote = f"https://x-access-token:{token}@github.com/{repo}.git"
    push_result = os.system(f"git push {remote} HEAD:main")
    if push_result != 0:
        print("Push failed.")
        sys.exit(1)
    print(f"Pushed {added} new solution(s) to {repo}.")


if __name__ == "__main__":
    main()
