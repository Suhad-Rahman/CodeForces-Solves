#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int len = 1;
    
    for(int i =0;i<n-1; i++) {
        if(s[i] != s[i + 1]) {
            len++;
        }
    }
    
    int del = 0;
    
    for(int i = 1; i<n-1; i++) {
        if(s[i] != s[i-1] && s[i] != s[i + 1]) {
            
            if(s[i - 1] == s[i + 1]) {
                del = 2;
                break;
            }
            else{
                del = 1;
            }
        }
    }
    
    cout<<len - del<<"\n";
    
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}