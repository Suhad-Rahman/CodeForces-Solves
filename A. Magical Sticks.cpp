#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    cout<<((n & 1) ? n/2+1 : n/2)<<"\n";
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