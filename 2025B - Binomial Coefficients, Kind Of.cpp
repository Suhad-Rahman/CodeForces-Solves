#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

int bin_expo(int base, int p) {
    int res = 1;
    long long mod = 1e9 + 7;
    
    while (p > 0) {
        
        if (p & 1) res = (res * base) % mod;
        
        base = (base * base) % mod;
        p >>= 1;
    }
    return res % mod;
}

void solve(int n) {
    vector < int > a(n);
    vector < int > k (n);
    
    for (int &x : a) cin >> x;
    
    for (int &x : k) cin >> x;
    
    for (int i = 0; i < n; i++) {
        cout << bin_expo (2, k[i]) << "\n";
    }
    
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    int n = t;
    
    solve(n);
    
    return 0;
}
