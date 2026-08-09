#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int l = 0, r = m;
    int res = 0;
    
    while (l <= r) {
        
        int mid = (l + r) / 2;
        
        int max_per_row = (m / (mid + 1) * mid) + (m % (mid + 1));
        
        if (n * max_per_row >= k) {
            res = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
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
