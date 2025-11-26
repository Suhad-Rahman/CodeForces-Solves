#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    string s;
    cin>>s;
    
    if(s.length() & 1){
        cout<<"NO\n";
        return;
    }
    
    int len = s.length()/2;
    
    for(int i = 0; i<len; i++){
        
            if(s[i]!=s[len+i]){
                cout<<"NO\n";
                return;
            }
    }
    
    cout<<"YES\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}