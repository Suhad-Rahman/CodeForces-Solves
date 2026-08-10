#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1;
        return;
    }
    
    int right = 1;
    int press = n;
    int extra = INT_MAX;
    int must = n - 1;
    
    while (extra > 0) {
        
        extra = right * (n - right - 1);
        
        press += extra + must;
        must--;
        right++;
    }
    cout << press << "\n";
}


int32_t main() {
    optimize();
    
    solve();
    
    return 0;
}
