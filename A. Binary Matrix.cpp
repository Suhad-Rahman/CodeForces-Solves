#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long


void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>>grid(n, vector<int>(m));

    for(int i = 0; i<n; i++) {
        string s;
        cin>>s;
        for(int j = 0; j<m; j++) {
            grid[i][j] = s[j] - '0'; 
        }
    }

    int r = 0, c = 0;
    int xr;

    for(int i = 0; i<n; i++) {
        xr = 0;
        for(int j = 0; j< m; j ++) {
            xr ^= grid[i][j];
        }
        if(xr == 1) {
            r++;
        }
    }

    for(int i = 0; i < m; i++) {
        xr = 0;
        for(int j = 0; j < n; j++) {
            xr ^= grid[j][i];
        }
        if(xr == 1) {
            c++;
        }
    }
    cout<<max(c, r)<<"\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin>>t;
	
	while(t--) {
	    solve();
	}
	
	return 0;
}
