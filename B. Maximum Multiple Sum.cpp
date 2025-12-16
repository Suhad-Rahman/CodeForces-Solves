#include<iostream>
#include<string>

using namespace std;

void solve(){
    
    int n {};
    cin>>n;
    
    cout<<((n==3) ? "3\n" : "2\n");
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