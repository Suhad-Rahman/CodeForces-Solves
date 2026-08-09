#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin>>s;
    
    n += n;
    
    int red = 0;
    int blue = 0;
    
    vector < int > a;
    
    for (int i = 0; i < s.size(); i++) {
        a.push_back (s[i] - '0');
    }
    
    vector < int > b(n, 0);
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;
        
        int j = (i + 1) % n;
        
        if (a[j] == 1) b[i] = 1;
        else b[j] = 1;
    }
    
    for (int i = 0; i < n; i++) {
        if ((i & 1) && b[i] == 1) red++;
        else if (b[i] == 1) blue++;
    }
    
    cout << red << " " << blue << "\n";
    
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
