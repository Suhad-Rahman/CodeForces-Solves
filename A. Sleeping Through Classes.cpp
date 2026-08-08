#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solve() {
    
    int n {}, k {};
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    vector<bool>must_awake (n, false);
    
    for(int i=0; i<n; i++){
        
        if(s[i]=='1'){
            
            must_awake[i] = true;
            
            int min_idx = min(i+k, n-1);
            
            for(int j = i+1; j<= min_idx; j++){
                must_awake[j] = true;
            }
            
        }
        
    }
    
    
    int awake {};
    
    for(int i=0; i<n; i++){
        if(must_awake[i]){
            awake++;
        }
    }
    cout<<n - awake<<"\n";
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