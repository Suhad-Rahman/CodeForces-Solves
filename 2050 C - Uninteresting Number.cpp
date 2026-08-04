#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int sum = 0;
    
    string s;
    cin>>s;
    
    int cnt2 = 0, cnt3 = 0;
    
    for(char c : s) {
        int x = c - '0';
        sum += x;
        
        if(x == 2)cnt2++;
        if(x == 3)cnt3++;
    }
    
    int l1 = min(cnt2, 8LL);
    int l2 = min(cnt3, 8LL);
    
    for(int i = 0; i <= l1; i++) {
        
        for(int j = 0; j <= l2; j++) {
            
            if((sum + (i*2 + j*6)) % 9 == 0) {
                cout<<"YES\n";
                return;
            }
            
        }
        
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
