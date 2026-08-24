#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    s = "0" + s;
    
    char cur = s[0], next;
    
    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
        next = s[i];
        if (cur != next) {
            ans++;
            cur = next;
        }
    }
    
    if (ans >= 3) {
        cout << ans - 2 + n << "\n";
    }
    
    else if (ans == 2) {
        cout << ans - 1 + n << "\n";
    }
    
    else {
        cout << ans + n << "\n";
    }
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
