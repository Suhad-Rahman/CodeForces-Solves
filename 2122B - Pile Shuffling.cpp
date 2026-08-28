#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    vector < vector < int > > piles(n, vector < int > (4));
    
    for (auto &row : piles) {
        for (auto &x : row) {
            cin >> x;
        }
    }
    
    int move = 0;
    
    for (auto &row : piles) {
        
        int a, b, c, d;
        a = row[0];
        b = row[1];
        c = row[2];
        d = row[3];
        
        if (a > c) {
            int m = abs (a - c);
            a -= m;
            move += m;
        }
        
        if (b > d) {
            int m = abs (a + b - d);
            b -= m;
            move += m;
        }
    }
    cout << move << "\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
