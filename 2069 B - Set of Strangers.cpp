#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

void solve() {
    
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>>grid(n, vector<int>(m));
    unordered_map<int, int>mp;
    
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cin>>grid[i][j];
            
            mp[grid[i][j]] = 1;
        }
    }
    
   
    
    for(int j = 0; j<m; j++) {
        for(int i = 0; i<n; i++) {
            if(j < m - 1 && grid[i][j] == grid[i][j + 1]) mp[grid[i][j]] = 2;
            
            if(i < n - 1 && grid[i][j] == grid[i+1][j]) mp[grid[i+1][j]] = 2;
        }
    }
    
    int cost = 0;
    int single = 0;
    
    for(auto &u : mp) {
        cost += u.second;
        single = max(single, u.second);
    }
    cout<<cost - single<<"\n";
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
