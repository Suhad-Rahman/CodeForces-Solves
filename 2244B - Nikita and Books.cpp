#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    int cur = 0, need;
    bool f = true;
    
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        
        cur += x;
        
        need = (i * (i + 1) / 2);
        
        if (cur < need) f = false;
    }
    cout << ((f) ? "YES\n" : "NO\n");
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
