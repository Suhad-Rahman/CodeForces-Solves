#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
    
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        vector<int>arr(n);
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        
        sort(arr.begin(), arr.end());
        
        int flag = 1;
        
        for(int i=0; i<n-1; i++) {
            
            if(abs(arr[i]-arr[i+1])>1){
                cout<<"NO\n";
                flag = 0;
                break;
            }
            
        }
        
        if(flag==1){
            cout<<"YES\n";
        }
        
    }
    
    return 0;
}