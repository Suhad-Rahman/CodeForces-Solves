#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    
    int n;
    cin>>n;
    
    string s1, s2;
    cin>>s1>>s2;
    
    int ev_s1 = 0, od_s1 = 0;
    int od_s2 = 0, ev_s2 = 0;
    
    for(int i = 0; i<n; i++) {
        if(i & 1 && s1[i] == '1') {
            od_s1++;
        }
        else if(s1[i] == '1') {
            ev_s1++;
        }
        
        if((i & 1) && s2[i] == '1') {
            od_s2++;
        }
        else if(s2[i] == '1') {
            ev_s2++;
        }
    }
    
    if(od_s1 != od_s2 || ev_s1 != ev_s2) {
        cout<<-1<<"\n";
        return;
    }
    
    vector<int>ev1, ev2, od1, od2;
    
    for(int i = 0; i<n; i++) {
        if(i & 1) {
            if(s1[i] == '1')od1.push_back(i);
            if(s2[i] == '1')od2.push_back(i);
        }
        else{
            if(s1[i] == '1')ev1.push_back(i);
            if(s2[i] == '1')ev2.push_back(i);
        }
    }
    
    int ans = 0;
    
    for(int i = 0; i<ev_s1; i++) {
        ans += abs(ev1[i] - ev2[i]);
    }
    
    for(int i = 0; i<od_s2; i++) {
        ans += abs(od1[i] - od2[i]);
    }
    cout<<ans/2<<"\n";
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