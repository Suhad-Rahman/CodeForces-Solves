#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long


bool is_valid(string s) {
    stack < char > st;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') st.push(s[i]);
        else if (!(st.empty())){
            st.pop();
        }
        else {
            return false;
        }
    }
    return ((st.empty()) ? true : false);
}

int Cost(string s) {
    stack < char > st;
    
    int opn = 0, cls = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') opn += i;
        else cls += i;
    }
    
    return cls - opn;
}


void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    s[0] = '('; s[n - 1] = ')';
    
    string ans1 = "";
    string ans2 = "";
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            ans1 += '(';
            cnt++;
        }
        else if (s[i] == ')') {
            ans1 += ')';
            cnt--;
        }
        else if (cnt > 0) {
            ans1 += ')';
            cnt--;
        }
        else {
            ans1 += '(';
            cnt++;
        }
    }
    
    cnt = 0;
    
    for (int i = n - 1; i > 0; i--) {
        if (s[i] == ')') {
            ans2 += ')';
            cnt++;
        }
        else if (s[i] == '(') {
            ans2 += '(';
            cnt--;
        }
        else if (cnt > 0) {
            ans2 += '(';
            cnt--;
        }
        else {
            ans2 += ')';
            cnt++;
        }
    }
    
    // cout << ans1 << " " << ans2 << "\n";
    
    bool f1 = is_valid(ans1);
    bool f2 = is_valid(ans2);
    
    // cout << f1 << " " << f2 << "\n";
    
    int res = 1e9;
    
    if (f1) {
        res = Cost(ans1);
    }
    
    else {
        res = min(res, Cost(ans2));
    }
    cout << res << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
