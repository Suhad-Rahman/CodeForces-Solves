#include<iostream>
#include<vector>

using namespace std;

void solve() {
    
    int n {}, a {};
    cin>>n>>a;
    
    vector<int>arr(n);
    
    int more {}, less {};
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i]>a){
            more++;
        }
        
        else if(arr[i]<a){
            less++;
        }
        
    }
    
    
    
    cout<<((more>less) ? a+1 : a-1) <<"\n";
    
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        
        solve();
        
    }
    
    
    
    return 0;
}