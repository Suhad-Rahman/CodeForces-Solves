#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

void solve() {
    
    int n;
    cin>>n;
    
    vector<int>h(n);
    
    for(int &x : h) {
        cin>>x;
    }
    
    for(int i = 0; i < n; i++) {
        vector<int>w1(n), w2(n), w(n);
        
        for(int j = 1; j < n; j++) {
            w1[(i+j) % n] = max(w1[(i+j-1) % n], h[(i+j-1) % n]);
        }
        
        for(int k = 1; k < n; k++) {
            w2[(i + n - k) % n] = max(w2[(i + n - k + 1) % n], h[(i + n - k) % n]);
        }
        
        for(int i = 0; i<n; i++) {
            w[i] = min(w1[i], w2[i]);
        }
        
        int res = accumulate(w.begin(), w.end(), 0ll);
        cout<<res<<" ";
    }
    cout<<"\n";
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
