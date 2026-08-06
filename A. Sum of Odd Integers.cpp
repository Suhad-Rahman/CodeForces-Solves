#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, k;
    cin>>n>>k;
    
    //Distinct condition fails!!!
    
    // int rem1 = n - (k - 1);
    // int rem2 = n - (k - 2) - 3;
    
    // cout<<((rem1 & 1) || ((rem2 & 1) && rem2 > 0) || (n == k) ? "YES\n" : "NO\n");

    if(k*k > n) {
        cout<<"NO\n";
    }
    else if(k % 2 != n % 2) {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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
