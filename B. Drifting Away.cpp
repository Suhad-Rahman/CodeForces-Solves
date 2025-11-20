#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string s;

void solve() {
    
    cin>>s;
    
    int right {}, left {};
    
    for(int i=0; i<s.length()-1; i++){
        
        if((s[i]=='>' && s[i+1]=='*') || (s[i]=='*' && (s[i+1]=='<' || s[i+1]=='*')) || (s[i]=='>' &&s[i+1]=='<')){
            cout<<-1<<"\n";
            return;
        }
    }
    
    for(int i=0; i<s.length(); i++){
        
        if(s[i]=='>'){
            
            right++;
            
            if(s[i-1]=='*'){
                right++;
            }
        }
        
        else if(s[i]=='<'){
            left++;
            
            if(s[i+1]=='*'){
                left++;
            }
        }
    }
    
    cout<<max({right, left, 1})<<"\n";
    
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        
        solve();
        
        
    }
    
    
    return 0;
}