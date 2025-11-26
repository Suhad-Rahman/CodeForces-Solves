#include<iostream>

using namespace std;

void solve() {
    
    long long x{} , y {}, n {};
    
    cin>>x>>y>>n;
    
    if(n-n % x+y <= n){
        cout<<n-n % x+y<<"\n";
    }
    
    else{
        cout<<n-n % x - (x-y)<<"\n";
    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
    solve();
    }
    
    return 0;
}