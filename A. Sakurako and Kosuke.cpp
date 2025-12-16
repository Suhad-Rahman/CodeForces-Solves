#include<iostream>
#include<cmath>

using namespace std;

void solve() {
    
    int n {}, limit {}, move {}, i = 1;
    cin>>n;
    
    while(abs(limit)<=n){
        
        limit += ((i & 1) ? -(2*i-1) : 2*i-1);
        
        move++;
        i++;
    }
    cout<<((move & 1) ? "Sakurako\n" : "Kosuke\n");
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