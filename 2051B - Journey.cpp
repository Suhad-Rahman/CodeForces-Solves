#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    int sum = a + b + c;
    
    int cycle = (n / sum);
    
    int rem = (n - (cycle * sum));
    
    int days = (cycle * 3);
    
    if (rem <= 0) {
        cout << days << "\n";
        return;
    }
    
    rem -= a;
    days++;
    
    if (rem <= 0) {
        cout << days << "\n";
        return;
    }
    
    rem -= b;
    days++;
    
    if (rem <= 0) {
        cout << days << "\n";
        return;
    }
    
    days++;
    
    cout << days << "\n";
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
