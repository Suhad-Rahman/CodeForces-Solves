#include<iostream>

using namespace std;

void solve() {
    
    int a {}, b {}, n {}, steps {};
    cin>>a>>b>>n;
    
    while(a <= n && b <= n){
        if(a>b){
            b += a;
            steps++;
        }
        
        else{
            a +=b;
            steps++;
        }
    }
    
    cout<<steps<<"\n";
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