#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        
        vector<int> arr(n);
        
        int even {}, odd {};
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
            
            if(arr[i] & 1){
                odd=1;
            }
            else{
                even = 1;
            }
        }
        
        if(even && odd) {
            sort(arr.begin(), arr.end());
        }
        
        for(int i=0; i<n; i++){
            cout<<arr[i];
            
            if(i<n-1){
                cout<<" ";
            }
        }
        
        cout<<"\n";
        
        
    }
    
    
    
    return 0;
}