#include<iostream>
#include<string>

using namespace std;

void solve(){
    
    int a {}, b {};
    cin>>a>>b;
    
    if(((a*1 + b*2) & 1) || ((b & 1) && ((a & 1) || a==0))){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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