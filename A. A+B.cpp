#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    string s;
    cin>>s;
    
    cout<<(s[0]-'0')+(s[2] - '0')<<"\n";
    
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