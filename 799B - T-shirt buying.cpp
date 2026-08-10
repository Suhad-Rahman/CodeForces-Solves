#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector < int > p(n), a(n), b(n);
    
    for (int &x : p) cin >> x;
    
    for (int &x : a) cin >> x;
    
    for (int &x : b) cin >> x;
    
    set < int > s[4];
    
    for (int i = 0; i < n; i++) {
        s[a[i]].insert (p[i]);
        s[b[i]].insert (p[i]);
    }
    
    int m;
    cin >> m;
    
    vector < int > res;
    
    while(m--) {
        int color;
        cin >> color;
        
        int it;
        
        if (s[color].empty()) {
            res.push_back(-1);
            continue;
        }
        
        else {
            it = *s[color].begin();
            
            res.push_back(it);
            
            s[1].erase(it);
            s[2].erase(it);
            s[3].erase(it);
            
        }
    }
    
    for (int &x : res) {
        cout << x << " ";
    }
    cout << "\n";
}


int32_t main() {
    optimize();
    
    solve();
    
    return 0;
}
