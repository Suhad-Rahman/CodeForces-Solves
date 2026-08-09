#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int x, y, z;
    cin>>x>>y>>z;
    
    int mx = max ({x, y, z});
    
    int rem = (x + y + z) - mx;
    
    int mn = min({x, y, z});
    
    if (rem <= mx) {
        cout << rem - mn << "\n";
    }
    else cout << mx - mn << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
