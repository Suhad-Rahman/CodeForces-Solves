#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    vector < int > even, odd;
    
    for (int i = 0; i < n; i++) {
        
        int x;
        cin >> x;
        
        if (x & 1) odd.push_back(x);
        else even.push_back(x);
    }
    
    int sum = 0;
    
    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());
    
    sum = accumulate(even.begin(), even.end(), 0LL);
    
    if (odd.size() & 1) {
        for (int i = 0; i < odd.size() - 1; i++) {
            sum += odd[i];
        }
    }
    
    else {
        sum = accumulate(odd.begin(), odd.end(), sum);
    }
    cout << sum << "\n";
}


int32_t main() {
	optimize();
	
	solve();
	
return 0;
}
