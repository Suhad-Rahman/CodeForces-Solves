#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    vector< int >a (5);
    
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        cin >> a[i];
    }
    
    int ans = 0;
    
    a[2] = a[0] + a[1];
    
    int cnt = 0;
    
    for (int i = 2; i < 5; i++) {
        if (a[i] == a[i - 1] + a[i - 2]) cnt++;
    }
    
    ans = max (ans, cnt);
    
    a[2] = a[3] - a[1];
    cnt = 0;
    
    for (int i = 2; i < 5; i++) {
        if (a[i] == a[i - 1] + a[i - 2]) cnt++;
    }
    
    ans = max(ans, cnt);
    
    a[2] = a[4] - a[3];
    
    cnt = 0;
    
    for (int i = 2; i < 5; i++) {
        if (a[i] == a[i - 1] + a[i - 2]) cnt++;
    }
    ans = max (ans, cnt);
    
    cout << ans << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
