#include<iostream>

using namespace std;

void solve() {
    
    int n {}, k_th {};
    cin>>n>>k_th;
    
    cout<<k_th + ((k_th-1)/(n-1))<<"\n";
    
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