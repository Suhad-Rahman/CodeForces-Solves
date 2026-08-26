#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int a, b;
    cin >> a >> b;
    
    //case 01
    if ((a & 1) && (b & 1)) cout << a * b + 1 << "\n";
    
    //case 02
    else if (!(a & 1) && !(b & 1)) cout << (a * (b / 2)) + 2 << "\n";
    
    //case 03
    else if (!(a & 1) && (b & 1)) cout << -1 << "\n";
    
    else {
        if (b % 4 == 0) cout << (a * (b / 2)) + 2 << "\n";
        else cout << -1 << "\n";
    }
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
