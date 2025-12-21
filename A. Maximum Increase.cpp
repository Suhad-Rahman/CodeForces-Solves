#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    vector<int>arr(n);
    int len {1}, max_len = -1e9;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(i>0 && arr[i-1] < arr[i]){
            len++;
        }
        
        else{
            max_len = max(max_len, len);
            len = 1;
        }
    }
    max_len = max(max_len, len);
    
    cout<<max_len;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}