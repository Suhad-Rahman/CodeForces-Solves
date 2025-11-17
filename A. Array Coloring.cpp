#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        int sum {};
        
        for(int i=0; i<n; i++){
            
            int x;
            cin>>x;
            sum += x;
        }
        (sum%2 ? cout<<"NO\n" : cout<<"YES\n");
    }
    
    
    
    return 0;
}