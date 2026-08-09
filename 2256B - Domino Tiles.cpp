#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define mod 998244353

int bin_expo (int n) {
    int base = 2;
    int res = 1;
    
    while (n > 0) {
        if (n & 1) res = (res * base) % mod;
        
        base = (base * base) % mod;
        n >>= 1;
    }
    
    return res % mod;
}

bool all(string s) {
    for (char c : s) {
        if (c != '?') return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    
    if (all(s)) {
        cout << 4 << "\n";
        return;
    }
    
    
    string ans1, ans2, ans3, ans4;
    ans1 = "";
    ans2 = "";
    ans3 = "";
    ans4 = "";
    
    char cnt = '0';
    char ev = '0';
    
    for (int i = 0; i < n; i++) {
        
        if (i & 1) {
            ans1 += cnt;
            cnt = ((cnt == '0') ? '1' : '0');
        }
        else {
            ans1 += ev;
            ev = ((ev == '0') ? '1' : '0');
        }
    }
    
    cnt = '1';
    ev = '0';
    
    for (int i = 0; i < n; i++) {
        
        if (i & 1) {
            ans2 += cnt;
            cnt = ((cnt == '0') ? '1' : '0');
        }
        else {
            ans2 += ev;
            ev = ((ev == '0') ? '1' : '0');
        }
    }
    
    cnt = '0';
    ev = '1';
    
    for (int i = 0; i < n; i++) {
        
        if (i & 1) {
            ans3 += cnt;
            cnt = ((cnt == '0') ? '1' : '0');
        }
        else {
            ans3 += ev;
            ev = ((ev == '0') ? '1' : '0');
        }
    }
    
    cnt = '1';
    ev = '1';
    
    for (int i = 0; i < n; i++) {
        
        if (i & 1) {
            ans4 += cnt;
            cnt = ((cnt == '0') ? '1' : '0');
        }
        else {
            ans4 += ev;
            ev = ((ev == '0') ? '1' : '0');
        }
    }
    
    bool f = true;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != ans1[i]) {
            f = false;
            break;
        }
    }
    
    int ans = 0;
    
    if (f) {
        ans++;
    }
    
    f = true;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != ans2[i]) {
            f = false;
            break;
        }
    }
    
    
    if (f) {
        ans++;
    }
    
    f = true;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != ans3[i]) {
            f = false;
            break;
        }
    }
    
    if (f) {
        ans++;
    }
    
    f = true;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != ans4[i]) {
            f = false;
            break;
        }
    }
    
    if (f) {
        ans++;
    }
    
    cout << ans << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
