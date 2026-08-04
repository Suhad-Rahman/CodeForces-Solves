#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long


bool all_same(vector<int>& a, int n) {
    
    for(int i = 0; i<n-1; i++) {
        if(a[i] != a[i+1]) {
            return false;
        }
    }
    return true;
}

int uni(vector<int> a) {
    sort(a.begin(), a.end());
    
    return unique(a.begin(), a.end()) - a.begin();
}


void solve() {
    
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int &x : a) {
        cin>>x;
    }
    
    if(n == uni(a)) {
        cout<<1<<" "<<n<<"\n";
        return;
    }
    
    if(all_same(a, n)) {
        cout<<0<<"\n";
        return;
    }
    
    int l = - 1, r = -1;
    int mx_len = 0, len = 0;
    
    unordered_map<int, int>mp;
    
    for(int &x : a) {
        mp[x]++;
    }
    int strt = - 1;
    
    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == 1) {
            if(len == 0) {
                strt = i + 1;
            }
            len++;
            if(len > mx_len) {
                mx_len = len;
                l = strt;
                r = i + 1;
            }
        }
        else{
            len = 0;
        }
    }

    if(mx_len == 0) {
        cout<<0<<"\n";
    }
    else {
        cout<<l<<" "<<r<<"\n";
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
