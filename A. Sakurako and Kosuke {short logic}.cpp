#include<iostream>
#include<cmath>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;

    cout<<((n & 1) ? "Kosuke\n" : "Sakurako\n");
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