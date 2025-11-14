#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        vector<int>arr(n);
        
        for(int &a : arr){
            cin>>a;
        }
        
        vector<int>copy = arr;
        
        sort(copy.begin(),copy.end());
        
        for(int i=0; i<n; i++){
            if(arr[i] != copy[1]){
                cout<<i+1<<'\n';
                break;
            }
        }
    }
    
    
    
    return 0;
}