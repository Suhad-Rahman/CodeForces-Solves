#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long


bool allSame (vector < int >& a) {
    
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] != a[i + 1]) return false;
    }
    return true;
}


void solve() {
    int n;
    cin >> n;
    
    int cnt1 = 0;
    
    vector < int > a(n);
    
    for  (int &x : a) {
        cin >> x;
        
        if (x == 1) cnt1++;
    }
    
    if (allSame (a) && a[0] == 1) {
        cout << n - 1 << "\n";
        return;
    }
    
    if (allSame (a) && a[0] == 0) {
        cout << n << "\n";
        return;
    }
    
    vector < int > b(n);
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) b[i] = -1;
        else b[i] = 1;
    }
    
    // Kadane's Algorithm (Maximum Subarray Sum) // 
    
    int mx_ending = b[0];
    int res = 0;
    
    for (int i = 1; i < n; i++) {
        
        mx_ending = max (b[i], mx_ending + b[i]);
        
        res = max (res, mx_ending);
    }
    cout << res + cnt1 << "\n";
}


int32_t main() {
    optimize();
    
    solve();
    
    return 0;
}
