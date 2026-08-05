#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n;
    cin>>n;
    
    string s1, s2;
    cin>>s1>>s2;
    
    int ev_s1 = 0, od_s1 = 0;
    int od_s2 = 0, ev_s2 = 0;
    
    for(int i = 0; i<n; i++) {
        if(i & 1 && s1[i] == '1') {
            od_s1++;
        }
        else if(s1[i] == '1') {
            ev_s1++;
        }
        
        if((i & 1) && s2[i] == '1') {
            od_s2++;
        }
        else if(s2[i] == '1') {
            ev_s2++;
        }
    }
    
    if(od_s1 == od_s2 && ev_s1 == ev_s2) {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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