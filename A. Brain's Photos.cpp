#include<iostream>

using namespace std;

void solve(){
    
    int n {}, m {};
    cin>>n>>m;
    
    bool flag = false;
    
    for(int i=0; i<n*m; i++){
        
        char c;
        cin>>c;
        
        if(c=='C' || c=='M' || c=='Y'){
            flag = true;
        }
    }
    cout<<(flag ? "#Color" : "#Black&White");
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}