#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector < int > a_card, b_card;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a_card.push_back(i + 1);
        else b_card.push_back(i + 1);
    }
    
    int f, l, l2;
    f = a_card[0];
    l = a_card.back();
    l2 = a_card [ a_card.size() - 2];
    
    //case 01
    if (f == 1 && l == n) cout << "Alice\n";
    
    else if (f == 1 && b_card.size() == 1) cout << "Alice\n";
    
    else if (l == n && l2 == n-1) cout << "Alice\n";
    
    else cout << "Bob\n";
}


int32_t main() {
	optimize();
	
	int t;
	cin >> t;
	
	while(t--) solve();
	
return 0;
}
