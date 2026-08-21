#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    vector < int > a(n);
    
    for (int &x : a) {
        cin >> x;
    }
    
    sort (a.begin (), a.end());
    
    vector < int > aa = a;
    
    int move = 0;
    
    while (a.size() != 1 && (a[0] + a[a.size() - 1]) % 2 != 0) {
        move++;
        a.pop_back();
    }
    
    sort(aa.rbegin(), aa.rend());
    
    int m2 = 0;
    
    while (aa.size() != 1 && (aa[0] + aa[aa.size() - 1]) % 2 != 0) {
        m2++;
        aa.pop_back();
    }
    cout << min (move, m2) << "\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
