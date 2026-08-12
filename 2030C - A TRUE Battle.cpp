#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

bool allSame(string s) {
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    if (allSame(s)) {
        if (s[0] == '1') {
            cout << "YES\n";
            return;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    
    if (n < 3) {
        cout << "YES\n";
        return;
    }
    
    else if (s[0] == '1' || s[n - 1] == '1') {
        cout << "YES\n";
        return;
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '1') {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin >> t;
    
    while (t--) solve();
    
    return 0;
}
