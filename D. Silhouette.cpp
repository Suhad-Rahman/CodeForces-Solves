#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool all_same(vector < int > & b) {
    int n = b.size();

    for (int i = 0; i < n - 1; i++) {

        if (b[i] != b[i + 1]) {
            return false;
        }
    }
    return true;
}


void solve() {

    int n;
    cin >> n;

    vector < int > b, bb;
    set < int > s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        b.push_back(x);
        s.insert(x);
    }

    if ((all_same(b) && b[0] != 0) || (n == 1 && b[0] != 0)) {
        cout << -1 << "\n";
        return;
    }

    if (n == 1 && b[0] != 0) {
        cout << -1 << "\n";
        return;
    }

    for (auto u: s) {
        bb.push_back(u);
    }

    s.clear();

    //Upsolve
    if (bb[0] != 0) {
        cout << -1 << "\n";
        return;
    }

    map < int, int > cnt;
    int prev_sum = 0;

    for (int i = 0; i < n; i++) {
        cnt[b[i]]++;
    }

    map < int, int > ans;

    int prev_cnt = 0, prev_bi = 0;
    int last = 0;
    
    for(auto &[cur_bi, cur_cnt] : cnt) {
        
        if(cur_bi != 0) {
            int diff = cur_bi - prev_bi;
            
            if(diff % prev_cnt != 0) {
                cout<<-1<<"\n";
                return;
            }
            
            int u = diff / prev_cnt;
            if(u <= last) {
                cout<<-1<<"\n";
                return;
            }
            
            
            last = u;
            
            
            
            ans[prev_bi] = u;
            
        }
        prev_bi = cur_bi;
        prev_cnt = cur_cnt;
    }

    ans[prev_bi] = last + 1;

    for (int x: b) {
        cout << ans[x] << " ";
    }
    cout << "\n";
}


int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}