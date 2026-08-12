#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;
    
    if(360 % (180 - n) == 0) cout << "YES\n";
    
    else cout << "NO\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin >> t;
    
    while(t--) solve();
    
    return 0;
}
