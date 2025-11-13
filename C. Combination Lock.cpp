#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        if((n & 1)==0){
            cout<<"-1\n";
            continue;
        }
        
        vector<int>even;
        
        for(int i=1; i<=n; i++){
            
            if((i & 1)==1) {
                cout<<i<<" ";
            }
            
            else{
                even.push_back(i);
            }
            
        }
        
        for(int i=0; i<even.size(); i++) {
            cout<<even[i];
            
            if(i<n-1){
                cout<<" ";
            }
        }
        
        cout<<"\n";
    }
    
    
    return 0;
}