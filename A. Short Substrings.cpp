#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve() {
    
    string s;
    cin>>s;
    
    string copy;
    
    copy += s[0];
    
    for(int i = 1; i<(s.length()-2); i++){
        
        if(s[i]==s[i+1]){
            copy += s[i];
            i++;
        }
    }
    
    copy += s[s.length()-1];
    
    cout<<copy<<"\n";
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        
        solve();
        
    }
    
    
    return 0;
}