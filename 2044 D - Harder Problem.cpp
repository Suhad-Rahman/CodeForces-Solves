#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin>>n;
    
    vector<int>a(n, 0), b(n + 1, 0);
    
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        
        if(!b[x]) {
            a[i] = x;
            b[x] = 1;
        }
    }
    
    queue<int>q;
    
    for(int i = 1; i<=n; i++) {
        if(!b[i]) {
            q.push(i);
        }
    }
    
    for(int i = 0; i<n; i++) {
        if(!a[i]) {
            a[i] = q.front();
            q.pop();
        }
    }
    
    for(int &x : a) {
        cout<<x<<" ";
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