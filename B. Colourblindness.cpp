#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    string s_1;
    string s_2;
    
    cin>>s_1>>s_2;
    
    for(int i=0; i<n; i++){
        if(s_1[i] == 'B'){
            s_1[i] = 'G';
        }
        
        if(s_2[i] == 'B'){
            s_2[i] = 'G';
        }
    }
    
    cout<<((s_1 == s_2)? "YES\n" : "NO\n");
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