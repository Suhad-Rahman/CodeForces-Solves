#include<iostream>

using namespace std;

void solve() {
    
    int x {};
    cin>>x;
    
    int min = 1e9;
    
    while(x!=0){
        
        int rem = x%10;
        x /= 10;
        
        min = (rem<min ? rem : min);
    }
    
    cout<<min<<"\n";
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