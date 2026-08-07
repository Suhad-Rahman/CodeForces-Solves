#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    
    string s;
    cin>>s;
    
    stack<char>st;
    
    for(char & c: s) {
        if(c == '(' )st.push(c);
        else{
            if(st.empty()) {
                cout<<"NO\n";
                return;
            }
            st.pop();
        }
    }
    cout<<((st.empty()) ? "YES\n" : "NO\n");
}


int32_t main() {
    optimize();
    
    solve();
    
    return 0;
}
