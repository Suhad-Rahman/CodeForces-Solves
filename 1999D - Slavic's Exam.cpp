#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    string s, t;
    cin >> s >> t;
    
    int n = s.size();
    int m = t.size();
    
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        if (j >= m) break;
        
        if (s[i] == t[j]) {
            j++;
        }
        
        else if (s[i] == '?') {
            s[i] = t[j];
            j++;
        }
    }
    cout << ((j == m) ? "YES\n" : "NO\n");
    
    if (j == m) {
        for (char &c : s) {
            if (c == '?') c = 'a';
            cout << c;
        }
        cout << "\n";
    }
}


int32_t main() {
    optimize();
    
    int t;
    cin >> t;
    
    while (t--) solve();
    
    return 0;
}
