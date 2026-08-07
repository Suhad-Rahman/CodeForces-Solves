#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin>>n;
    
    int lim = (n+1)/2;
    
    for(int i = 2; i <= lim; i++) {
        if((n + 1) % i == 0) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}