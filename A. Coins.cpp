#include<iostream>

using namespace std;

void solve() {
    
    long long n {}, k {};
    cin>>n>>k;
    
    if(((n-k) % 2 == 0) || (n%2==0)){
        cout<<"YES\n";
    }
    
    else{
        cout<<"NO\n";
    }
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