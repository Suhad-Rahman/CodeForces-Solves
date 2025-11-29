#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int ans {};
    
    for(long long i=1; i<=n; i = i*10+1){
        
        for(int d=1; d<=9; d++){
            
            if(i*d <= n){
                ans++;
            }
            
        }
        
        
    }
    
    cout<<ans<<"\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--) {
        
        solve();
        
    }
    
    return 0;
}