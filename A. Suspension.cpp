#include<iostream>

using namespace std;

void solve() {
    
    int n {}, r {}, y {};
    cin>>n>>y>>r;
    
    cout<<(n>(r+y/2) ? r+y/2 : n)<<"\n";
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