#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    
    int a {}, b {}, c {}, n {};
    cin>>a>>b>>c>>n;
    
    int max_coin = max({a,b,c});
    
    n -= (max_coin*3 - (a + b + c));
    
    cout<<((n < 0 || n % 3) ? "NO\n" : "YES\n"); 
}

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}