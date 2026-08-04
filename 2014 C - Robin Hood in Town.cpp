#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    int sum = 0;
    int mx = 0;
    
    for(int &x : a) {
        cin>>x;
        sum += x;
        
        mx = max(mx, x);
    }
    
    if(n == 1 || n == 2) {
        cout<<-1<<"\n";
        return;
    }
    
    int avg = (sum+n-1) / n;
    
    int w_of_desired_unhappy;
    
    sort(a.begin(), a.end());
    
    if(n & 1) {
        int idx = (n+1)/2;
        w_of_desired_unhappy = a[idx - 1];
    }
    else if(!(n & 1)){
        int idx = (n/2) + 1;
        w_of_desired_unhappy = a[idx - 1];
    }
    
    int needed_avg = (w_of_desired_unhappy * 2) + 1;
    
    if(needed_avg <= avg) {
        cout<<0<<"\n";
        return;
    }
    
    int wanted_sum = (n * (needed_avg - 1)) + 1;
    
    cout<<wanted_sum - sum<<"\n";
    
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