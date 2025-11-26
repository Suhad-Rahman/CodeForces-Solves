#include<iostream>

using namespace std;


void solve() {
    
    int n;
    cin>>n;
    
    int even {}, odd {};
    
    for(int i=0; i<n; i++){
        
        int input {};
        cin>>input;
        
        if((i & 1) && !(input & 1)){
            even++;
        }
        
        else if(!(i & 1) && (input & 1)){
            odd++;
        }
    }
    
    if(odd==even){
        cout<<even<<"\n";
        return;
    }
    
    cout<<-1<<"\n";
    
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