#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, k;
    cin>>n>>k;
    
    vector<int>a(n);
    
    for(int &x : a) {
        cin>>x;
    }
    
    sort(a.begin(), a.end());
    
    vector<int>p_sum(n + 1, 0);
    
    for(int i = 0; i<n; i++) {
        p_sum[i + 1] += p_sum[i] + a[i];
    }
    
    int mx_sum = 0;
    
    for(int i = 0; i<=k; i++) {
        
        int sum = p_sum[n - (k - i)] - p_sum[2*i];
        
        mx_sum = max(mx_sum, sum);
    }
    cout<<mx_sum<<"\n";
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
