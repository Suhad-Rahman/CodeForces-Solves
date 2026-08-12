#include<iostream>
#include<vector>

using namespace std;

void solve() {
    
    int n {}, even {}, odd {};
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i =0; i<n; i++){
        cin>>arr[i];
    
        if(arr[i] & 1){
            odd++;
        }
        
        else{
            even++;
        }
    }
    
    cout<<(even < odd ? even : odd)<<"\n";
}

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}