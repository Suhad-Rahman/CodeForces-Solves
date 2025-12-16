#include<iostream>

using namespace std;

void solve() {
    
    int n {}, sum {};
    cin>>n;
    
    for(int i=0; i<n; i++){
        
        int input {};
        cin>>input;
        
        sum += ((input>=0) ? input : (-1*input));
    }
    cout<<sum<<"\n";
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