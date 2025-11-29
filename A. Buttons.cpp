#include<iostream>

using namespace std;

void solve() {
    
    int a {}, b {}, c {};
    cin>>a>>b>>c;
    
    cout<<((a+(c%2)>b) ? "First\n" : "Second\n");

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