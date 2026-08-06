#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin>>n;
    
    multiset<int>ms;
    int cur = 0;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        
        ms.insert(x);
    }
    
    vector<int>res(n);
    
    for(int i = 0; i < n; i++) {
        
        auto it = ms.lower_bound(1 - cur);
        
        if(it == ms.end()) {
            cout<<-1<<"\n";
            return;
        }
        
        cur += *it;
        ms.erase(it);
        res[i] = cur;
    }
    for(int i = 0; i < n; i++) {
        cout<<res[i]<<" \n"[i == n - 1];
    }
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
