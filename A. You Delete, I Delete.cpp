#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    string s;
    cin>>s;
    
    string res = "";
    
    bool a = false, b = false;
    
    for(char &c : s) {
        if(c == '0' && !a) {
            a = true;
            continue;
        }
        res += c;
    }
    
    string fin_res = "";
    
    for(char & c : res) {
        if(c == '1' && !b) {
            b = true;
            continue;
        }
        fin_res += c;
    }
    cout<<fin_res<<"\n";
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
