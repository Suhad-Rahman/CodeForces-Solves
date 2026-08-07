#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    
    string p, s;
    cin >> p >> s;
    
    int n = p.size();
    int m = s.size();
    
    //Base cases
    
    if(n > 2 * m) {
        cout << "NO\n";
        return;
    }
    
    //Treat as blocks
    
    vector < int > block_p, block_s;
    
    int cnt = 1;
    
    if(n == 1) {
        block_p.push_back(cnt);
    }
    
    for (int i = 1; i < n; i++) {
        if (p[i - 1] == p[i]) {
            cnt++;
        }
        else {
            block_p.push_back(cnt);
            cnt = 1;
        }
        if (i == n - 1) {
            block_p.push_back(cnt);
        }
        
    }
    
    if(m == 1) {
        block_s.push_back(1);
    }
    
    cnt = 1;
    
    for (int i = 1; i < m; i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
        }
        else {
            block_s.push_back(cnt);
            cnt = 1;
        }
        if (i == m - 1) {
            block_s.push_back(cnt);
        }
    }
    
    
    //Conditions to be invalid
    
    if (p[0] != s[0] || p[n - 1] != s[m - 1] || block_s.size() != block_p.size()) {
        cout<< "NO" << "\n";
        return;
    }
    
    //validity check
    
    int idx1 = 0, idx2 = 0;
    int max_cap = 0;
    
    for(int i = 0; i < block_p.size(); i++) {
        
        max_cap = block_p[i] * 2;
        
        if(p[idx1] != s[idx2] || (block_s[i] > max_cap) || block_p[i] > block_s[i]) {
            cout << "NO\n";
            return;
        }
        
        idx1 += block_p[i];
        idx2 += block_s[i];
    }
    cout << "YES\n";
}


int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}