#include<iostream>

using namespace std;

void solve(){
    
    int hour {}, minute {};
    cin>>hour>>minute;
    
    cout<<(24*60) - ((hour*60)+minute)<<"\n";
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