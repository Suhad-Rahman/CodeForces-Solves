#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    
    int diff1 = abs(a - b);
    int diff2 = abs(b - c);
    int diff3 = abs(a - c);
    
    cout<<min({diff1, diff2, diff3})<<"\n";
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