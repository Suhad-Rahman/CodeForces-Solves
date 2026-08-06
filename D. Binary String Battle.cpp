#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    int cnt = 0;
    
    for(char &c : s) {
        if(c == '1') cnt++;
    }
    
    cout<<((cnt <= k || n < 2*k) ? "Alice\n" : "Bob\n");
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