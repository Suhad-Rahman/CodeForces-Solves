#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int odd {}, w = 2*n;
    
    while(w--){
        
        int input;
        cin>>input;
        
        if(input & 1){
            odd++;
        }
    }
    
    cout<<(odd==n ? "YES\n" : "NO\n");
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