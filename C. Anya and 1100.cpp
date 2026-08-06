#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long

bool is_match(const string &s, int i) {
    if (i < 0 || i + 3 >= s.size()) return false;
    return s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0';
}

void solve() {
    string s;
    cin>>s;
    
    int n = s.size();
    int match_count = 0;
    
    for(int i = 0; i<= n - 4; i++) {
        if(is_match(s, i)) {
            match_count++;
        }
    }
    
    int q;
    cin>>q;
    while(q--) {
        int pos;
        char v;
        cin>>pos>>v;
        pos--;
        
        for(int i = pos - 3; i <= pos; i++) {
            if(is_match(s, i)) {
                match_count--;
            }
        }
        
        s[pos]=v;
        
        for(int i =pos -3; i<= pos;i++) {
            if(is_match(s, i)) {
                match_count++;
            }
        }
        
        if(match_count > 0) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
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
