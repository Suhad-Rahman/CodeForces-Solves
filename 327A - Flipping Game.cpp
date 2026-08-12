#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

bool allSame(vector < int >& s) {
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    vector < int > s(n);
    int cnt1 = 0;
    
    for (int &x : s) {
        cin >> x;
    
        if (x == 1) cnt1++;
    }
    
    if (allSame (s) && s[0] == 1) {
        cout << n - 1 << "\n";
        return;
    }
    
    if (allSame (s) && s[0] == 0) {
        cout << n <<"\n";
        return;
    }
    
    vector < int > b(n);
    
    int mx_sum = -1e9;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 1) b[i] = -1;
        else b[i] = 1;
    }
    
    for (int i = 0; i < n; i++) {
        sum = 0;
        
        for (int j = i; j < n; j++) {
            sum += b[j];
            
            mx_sum = max(sum, mx_sum);
        }
    }
    
    
    cout << mx_sum + cnt1 << "\n";
}


int32_t main() {
    optimize();
   
    solve();
    
    return 0;
}
