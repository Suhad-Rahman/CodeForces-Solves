#include<iostream>
#include<cmath>

using namespace std;

void solve() {
    
    int n {}, x {};
    cin>>n>>x;
    
    cout<<(n<=2 ? 1 : ((n-3)/x)+2)<<"\n";
    
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