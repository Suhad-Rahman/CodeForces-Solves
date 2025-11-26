#include<iostream>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    if(n & 1){
        cout<<"0\n";
        return;
    }
    
    cout<<(n/4)+1<<"\n";
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        
        solve();
        
    }
    
    
    
    return 0;
}