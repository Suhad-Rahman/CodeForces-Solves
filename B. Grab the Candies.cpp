#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int even {}, odd {};
    
    while(n--){
        
        int input {};
        cin>>input;
        
        if(input & 1){
            odd += input;
        }
        
        else{
            even += input;
        }
    }
    
    cout<<(even>odd ? "YES\n" : "NO\n");
    
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