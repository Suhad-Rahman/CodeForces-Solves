#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long


void solve() {
    int n, m;
    cin >> n >> m;
 
    vector < int > a(n);
    for(auto &x : a) {
        cin >> x;
    }
 
    map < int, int > mp;
 
    for(auto &x : a) {
        mp[x] += 1;
    }
 
    vector < int > cnt(m + 1);
    cnt[m] = mp[m];
 
    for(int i = m - 1; i >= 0 ; i--){
        cnt[i] += cnt[i + 1] + mp[i];
    }
 
    int ans = 0;
 
    for(int i = 1; i <= m; i ++){
        ans = max(ans, cnt[i] + mp[2 * i]);
    }
 
    cout << ans << "\n";
}

int32_t main() {
	
	optimize();
	
	int t;
	cin >> t;
	
	while (t--) solve();
	
return 0;
}
