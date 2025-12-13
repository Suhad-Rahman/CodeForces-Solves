#include<iostream>
#include<string>
#include<set>

using namespace std;

void solve() {
    
    string s;
    int n {};
    set<char>checker;
    
    cin>>n;
    cin>>s;
    
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            checker.insert(s[i]);
        }
        
        if(checker.count(s[i+1])){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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