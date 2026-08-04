#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n, k;
    cin>>n>>k;
    
    vector<int>a(n);
    vector<int>b(n);
    
    for(int i  = 0; i < n; i++) {
        cin>>a[i];
        int x = a[i];
        a[i] = min((x % k), (k - (x % k)) % k);
        
    }
    
    for(int i = 0; i < n ; i++) {
        cin>>b[i];
        
        int x = b[i];
        
        b[i] = min((x % k), (k - (x % k)) %k);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i = 0; i<n; i++) {
        if(a[i] != b[i]) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
