#include<iostream>

using namespace std;

void solve() {
    
    int n {}, k{};
    cin>>n>>k;
    
    bool flag = false;
    
    while(n--){
        
        int input {};
        cin>>input;
        
        if(input==k){
            flag = true;
        }
    }
    
    cout<<((flag) ? "YES\n" : "NO\n");
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--) {
        
        solve();
        
    }
    
    return 0;
}