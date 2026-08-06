#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long


void solve() {
    int n;
    cin>>n;

    vector<int>a(n);

    for(int &x : a) {
        cin>>x;
    }

    if(n == 1) {
        cout<<a[0]<<"\n";
        return;
    }

    int mx = accumulate(a.begin(), a.end(), 0LL);
    vector<int>v;

    while(n > 1) {

        for(int i = 0; i<n - 1; i++) {
            v.push_back(a[i + 1] - a[i]);
        }

        mx = max(mx, abs(accumulate(v.begin(), v.end(), 0LL)));

        for(int i = 0; i<n - 1; i++) {
            a[i] = v[i];
        }
        v.clear();
        n--;
    }
cout<<mx<<"\n";
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
