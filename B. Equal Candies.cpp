#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int minimum = 1e9, sum {};
    int arr[n];
    
    for(int i=0; i<n; i++){
        
        cin>>arr[i];
        
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    
    for(int i=0; i<n; i++){
        
        if(arr[i]==minimum){
            continue;
        }
        
        else{
            sum += arr[i] - minimum;
        }
    }
    cout<<sum<<"\n";
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