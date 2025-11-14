#include<iostream>
#include<string>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        
        
        int n;
        cin>>n;
        
        char s[n+1];
        
        
        int len {};
        
        for(int i=0; i<n; i++) {
            cin>>s[i];
            
            if(s[i]=='1'){
                len++;
            }
        }
        
        cout<<len<<"\n";
        
        for(int i=0; i<n; i++) {
            if(s[i]=='1'){
                cout<<i+1;
                
                if(i<n-1){
                cout<<" ";
                }
            }
            
            
        }
        
        
        cout<<"\n";
        
        
    }
    
    
    return 0;
}