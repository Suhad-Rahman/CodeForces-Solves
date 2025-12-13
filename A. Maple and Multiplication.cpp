#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
    
    int a {}, b {};
    cin>>a>>b;
    
    if(a==b){
        cout<<"0\n";
        return;
    }
    
    int large = max(a,b);
    int small = min(a,b);
    
    cout<<((large%small == 0) ? "1\n" : "2\n");
    
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}