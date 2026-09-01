#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    
    if ((n % p != 0) || (m == (n / p) * q)) cout << "YES\n";
    else cout << "NO\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
