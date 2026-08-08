#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void solve() {
    
    int n {}, count {};
    cin>>n;
    
    string s;
    cin>>s;
    
    for(int i=0; i<n; i++){
        
        if(s[i]=='('){
            for(int j=i+1; j<n; j++){
                if(s[j]==')'){
                    
                    s[i] = '0';
                    s[j] = '0';
                    break;
                }
            }
        }
    }
    for(char c : s){
        
        if(c == '('){
            count++;
        }
    }
    cout<<count<<"\n";
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