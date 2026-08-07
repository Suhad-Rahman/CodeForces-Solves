#include<iostream>

using namespace std;

void solve() {
    
    int n {}, a {}, b {};
    cin>>n>>a>>b;
    
    cout<<((2*a<b) ? n*a : (n/2)*b + (n%2)*a)<<"\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}