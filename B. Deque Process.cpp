#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;

    vector < int > a(n);

    for (int & x: a) {
        cin >> x;
    }

    string ans= "";
    
    int i = 0, j = n - 1;
    
    while (i <= j) {
        int low = a[i];
        int high = a[j];
        
        int mn = min (a[i], a[j]);
        
        if(mn == low) {
            ans += 'L';
            i++;
        }
        
        else{
            ans += 'R';
            j--;
        }
        
        int mx = max (a[i], a[j]);
        
        if(mx == a[i]) {
            ans += 'L';
            i++;
        }
        else {
            ans += 'R';
            j--;
        }
    }
    
    if (n & 1) ans.pop_back();
    
    cout<< ans << "\n";
}


int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}