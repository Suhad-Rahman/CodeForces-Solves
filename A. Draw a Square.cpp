#include<iostream>

using namespace std;

void solve() {
    
    int L {}, R {}, D {}, U {};
    cin>>L>>R>>D>>U;
    
    cout<<((L==R && R==D && D==U) ? "YES\n" : "NO\n");
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