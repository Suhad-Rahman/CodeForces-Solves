#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin>>n;
    
    map<int, int>mp;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        
        mp[x]++;
    }
    
    int mx = 0;
    
    for(auto u : mp) {
        mx = max(mx, u.second);
    }
    
    int health = 0;
    
    for(auto u : mp) {
        
        if(u.second == mx) {
            int v = min(n - u.second + 2, u.second);
            health += v*u.first;
        }
        else{
            health += u.second*u.first;
        }
    }
    cout<<health<<"\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
