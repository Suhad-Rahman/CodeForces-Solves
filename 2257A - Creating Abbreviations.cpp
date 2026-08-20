#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n, m;
    cin >> n >> m;
    
    set < char > ab;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        char x = toupper(s[0]);
        
        ab.insert(x);
    }
    
    bool poss = true;
    
    while (m--) {
        
        string input;
        cin >> input;
        
        for (int i = 0; i < input.size(); i++) {
            if (ab.count(input[i]) == 0 && poss == true) {
                poss = false;
            }
        }
    }
    cout << ((poss) ? "YES\n" : "NO\n");
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
