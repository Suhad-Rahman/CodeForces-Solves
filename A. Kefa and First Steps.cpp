#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    int current_len = 1;
    int max_len = 1;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n-1; i++){
        if(arr[i+1]>=arr[i]){
            current_len++;
        }
        else{
            
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
        
        max_len = max(max_len, current_len);
        
    cout<<max_len<<"\n";
    
    return 0;
}