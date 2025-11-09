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
        
        vector<int>arr(n);
        int max = -1e9;
        int min = 1e9;
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
            
            if(arr[i]>max){
                max=arr[i];
            }
            
           if(arr[i]<min){
                min = arr[i];
            }
        }
        
        int x;
        cin>>x;
        
        if(x<=max && x>=min){
            cout<<"YES\n";
        }
        
        else{
            cout<<"NO\n";
        }
        
        
    }
    
    return 0;
}