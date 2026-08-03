#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int x, y, k;
    cin>>x>>y>>k;
    
    int x_axis = (x + k - 1) / k;
    int y_axis = (y + k - 1) / k;
    
    if(x_axis > y_axis) {
        int move = (x_axis * 2) - 1;
        cout<<max(0LL, move)<<"\n";
        return;
    }
    
    else{
        int move = (y_axis * 2);
        cout<<max(move, 0LL)<<"\n";
        return;
    }
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