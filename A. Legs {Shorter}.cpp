#include<iostream>

using namespace std;

void solve() {
    
    int legs {};
    cin>>legs;
    
    cout<<(legs/4) + (legs%4)/2<<"\n";
    
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