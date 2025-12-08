#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int ans {};
    
    for(int i=1; i<=n-1; i++){
        
        if((n-i) % i == 0){
            ans++;
        }
    }
    
    cout<<ans;
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}