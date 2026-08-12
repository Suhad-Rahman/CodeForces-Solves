#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long



void solve() {
    int n;
    cin >> n;
    
    vector < int > v (n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector < int > p_sum (n + 1, 0);
    
    p_sum[1] = v[0];
    
    for (int i = 2; i <= n; i++) {
        p_sum[i] = p_sum[i - 1] + v[i - 1];
    }
    
    sort(v.begin(), v.end());
    
    vector < int > p_cost (n + 1, 0);
    
    p_cost[1] = v[0];
    
    for (int i = 2; i <= n; i++) {
        p_cost[i] = p_cost[i - 1] + v[i - 1];
    }
    
    
    int m;
    cin >> m;
    
    while (m--) {
        
        int type, l, r;
        cin >> type >> l >> r;
        
        if (type == 1) {
            cout << p_sum[r] - p_sum[l - 1] << "\n";
        }
        
        else {
            cout << p_cost[r] - p_cost[l - 1] << "\n";
        }
    }
    
}


int32_t main() {
    optimize();
    
    solve();
    
    return 0;
}
