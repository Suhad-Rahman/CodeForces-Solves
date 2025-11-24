#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int count {};
    int len = s.length();
    
    for(int i=0; i<n/2; i++){
        
        if((s[i] == '0' && s[n-1-i] == '1') || (s[i] == '1' && s[n-1-i] == '0')){
            count += 2;
        }
        
        else{
            
            break;
        }
    }
    
    cout<<len - count<<"\n";
    
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