#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int &x : a) {
        cin>>x;
        
    }
    
    int res = LLONG_MAX;
    int i = 0;
    while(i<n) {
        
        int j = i;
        
        while(j<n && a[i] == a[j]) {
            j++;
        }
        int c = (i + n - j) * a[i];      //(i - 1)*a[i] + (n - (j-1))*a[i]
                                        // => a[i] * {i - 1 + n - j + 1}
                                        // => a[i] * (i - n + j)
        res = min(res, c);
        i = j;
    }
    cout<<res<<"\n";
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
