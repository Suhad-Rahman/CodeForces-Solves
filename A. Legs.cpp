#include<iostream>

using namespace std;

void solve() {
    
    int legs {};
    cin>>legs;
    
    int ans {};
    
    ans += legs / 4;
    ans += (legs % 4) / 2;
    
    cout<<ans<<"\n";
    
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