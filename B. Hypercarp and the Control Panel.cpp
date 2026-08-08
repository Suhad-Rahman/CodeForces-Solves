#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;

    vector < int >a;
    map < int, int > mp;
    
    a.push_back(0);
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        a.push_back(x);

        mp[x]++;
    }
    
    a.push_back(0);
    
    n = a.size();

    int ans = 1;
    
    for (int i = 1; i < n - 2; i++) if(a[i] != a[i + 1]) ans++;
    
    int benefit = 0;
    
    for (int i = 0; i < n - 3; i++) {
        int aa = a[i], b = a[i + 1], c = a[i + 2], d = a[i + 3];
        
        if (aa == b && b != c && c == d) {
            benefit = 2;
        }
        if (aa == b && b != c && b != d) {
            benefit = max (benefit, 1LL);
        }
        if (d == c && c != b && aa != c) {
            benefit = max(benefit, 1LL);
        }
    }
    cout << ans + benefit << "\n";
}


int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}