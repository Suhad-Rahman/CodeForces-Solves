#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

void solve() {
    int n, x, y;
    cin>>n>>x>>y;
    
    vector<pair<int, int>>vp;
    
    vector<int>a(n);
    
    int sum = 0;
    int cnt = 0;
    
    for(int &x : a) {
        cin>>x;
        
        sum += x;
    }
    
    sort(a.begin(), a.end());
    
    for(int i = 0; i<n; i++) {
        
        int low = sum - a[i] - y;
        int high = sum - a[i] - x;
        
        auto left = lower_bound(a.begin() + i + 1, a.end(), low);
        auto right = upper_bound(a.begin() + i + 1, a.end(), high);
        
        cnt += (right - left);
    }
    cout<<cnt<<"\n";
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
