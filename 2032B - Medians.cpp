#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n, k;
    cin >> n >> k;
    
    int m, p1, p2, p3;
    
    if (n != 1 && (k == 1 || k == n)) {
        cout << -1 << "\n";
        return;
    }
    
    if ( k == (n / 2) + 1) {
        m = n;
        
        cout << m << "\n";
    
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    
    else if (k & 1) {
        
        m = 3;
        p1 = 1;
        p2 = k - k % 2;
        p3 = k + 1 + k % 2;
        
    }
    
    else {
        m = 3;
        p1 = 1;
        p2 = k - k % 2;
        p3 = k + 1 + k % 2;
        
    }
    
    if(n == 1 && k == 1) {
        cout << 1 << "\n" << 1 << "\n";
        return;
    }
    
    cout << m << "\n";
    cout << p1 << " " << p2 << " " << p3 << "\n";
    
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
