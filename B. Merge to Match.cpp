#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n, m;
    cin>>n>>m;
    
    vector<int>a(n), b(m);
    
    for(int &x : a) {
        cin>>x;
    }
    
    for(int &x : b) {
        cin>>x;
    }
    
    multiset<int>ms (a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int j = 0;
    
    //     for(int i = 0; i<m; i++) {
    //     int x = b[i];
        
    //     auto less = ms.lower_bound(x);
        
    //      if(less == ms.begin()) {
    //          cout<<"NO\n";
    //          return;
    //      }
    //      else{
    //         less--;
    //         ms.erase(less);
    //     }
        
    // }
    
    for(int i = 0; i<m; i++) {
        
        int x = b[i];
        
        if(*ms.begin() < b[i] && !ms.empty()) {
            ms.erase(ms.begin());
        }
        else{
            cout<<"NO\n";
            return;
        }
        
        // auto greater = ms.upper_bound(x);
        
        // if(greater == ms.end()) {
        //     cout<<"NO\n";
        //     return;
        // }
        // else{
        //     ms.erase(greater);
        // }
    }
    
    for(int i = 0; i<m; i++) {
        int x = b[i];
        auto greater = ms.upper_bound(x);
        
        if(greater == ms.end()) {
            cout<<"NO\n";
            return;
        }
        else{
            ms.erase(greater);
        }
    }
    
    
    cout<<"YES\n";
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
