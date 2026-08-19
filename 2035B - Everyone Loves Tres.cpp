#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    if (n == 1 || n == 3) {
        cout << -1 << "\n";
        return;
    }
    
    if (n & 1) {
        for (int i = 0; i < n - 5; i++) cout << 3;
        cout << 36366;
    }
    
    else {
        for (int i = 0; i < n - 2; i++) cout << 3;
        cout << 66;
    }
    cout << "\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
