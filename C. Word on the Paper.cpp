#include<iostream>

using namespace std;

void solve() {
    
    for(int i=0; i<64; i++){
        
        char x;
        cin>>x;
        
        if(x != '.'){
            cout<<x;
        }
        
    }
    
    cout<<"\n";
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