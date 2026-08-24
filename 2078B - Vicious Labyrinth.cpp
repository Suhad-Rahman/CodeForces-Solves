#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n, k;
    cin >> n >> k;
    
    if (k & 1) {
        for (int i = 1; i <=n; i++) {
            if (i == n) cout << n - 1 << " ";
            else cout << n << " ";
        }
        cout << "\n";
    }
    
    else {
        for (int i = 1; i <=n; i++) {
            if (i == n - 1) cout << n << " ";
            else cout << n - 1 << " ";
        }
        cout << "\n";
    }
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
