#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int count {1};
    
    for(int i=0; i<n-1; i++){
        
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        
        if(count==3){
            cout<<arr[i]<<"\n";
            return;
        }
    }
    
    cout<<-1<<"\n";
    
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