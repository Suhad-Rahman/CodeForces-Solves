#include<iostream>

using namespace std;

void solve() {
    
    int n {}, sum {};
    cin>>n;
    
    int arr[n];
    bool flag = true, odd = false, even = false;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        sum += arr[i];
        
        if(arr[i] & 1){
            odd = true;
        }
        
        else{
            even = true;
        }
    }
     
    if((sum & 1) || (odd & even)){
        cout<<"YES\n";
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