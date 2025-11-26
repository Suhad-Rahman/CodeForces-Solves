#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    if(n%4 == 0){
        
        n /= 2;
        
        cout<<"YES\n";
        
        for(int i=1; i<=n; i++){
            cout<<i*2<<" ";
        }
        
        int j {};
        
        for(int i=1; i<n; i++){
            cout<<i*2-1<<" ";
        
            j = i;
        }
        cout<<3*n-1<<"\n";
    }
    
    else{
        cout<<"NO\n";
    }
    
    
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