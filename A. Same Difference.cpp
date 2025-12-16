#include<iostream>
#include<string>

using namespace std;

void solve(){
    
    int n {};
    cin>>n;
    
    string s;
    cin>>s;
    
    int move {};
    
    for(int i=0; i<n; i++){
        
        if(s[i] != s[n-1]){
            move++;
        }
    }
    
    cout<<move<<"\n";
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