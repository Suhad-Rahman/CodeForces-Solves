#include<iostream>

using namespace std;


void solve() {
    
    int n {};
    cin>>n;
    
    int max_2021 = n/2021;
    
    for(int i=0; i<=max_2021; i++){
        
        int remaining = n - 2021*i;
        
        if(remaining % 2020 == 0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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