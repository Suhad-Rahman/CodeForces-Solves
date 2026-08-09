#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int high = (k + n - 1) / n;
    int empty = m - high;
    
    if (m == high) {
        cout << m << "\n";
        return;
    }
    
    int ans = (high + empty) / (empty + 1);
    
    cout << ans << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
