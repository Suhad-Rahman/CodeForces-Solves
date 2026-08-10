#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin>>n;
    
    int op = (2*n) - 1;
    
    cout << op << "\n";
    
    
    for (int i = 1; i < n; i++) {
        cout << i << " " << "1 " << i << "\n";
        cout << i  << " " << i + 1 << " " << n << "\n";
    }
    
    cout << n << " " << "1 " << n << "\n"; 
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
