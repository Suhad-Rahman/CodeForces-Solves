#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    vector < int > a(n);
    
    for (int &x : a) {
        cin >> x;
    }
    
    int mn_pos = min_element(a.begin(), a.end()) - a.begin();
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        if (i != mn_pos && (a[i] % a[mn_pos]) == 0) {
            res = __gcd(res, a[i]);
        }
    }
    cout << ((res == a[mn_pos]) ? "YES\n" : "NO\n");
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while (t--) solve();
	
return 0;
}
