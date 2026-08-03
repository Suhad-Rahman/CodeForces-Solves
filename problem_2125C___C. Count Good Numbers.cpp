#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

vector<int>pc(211, 0);

void pre_compute() {
    
    for(int i = 1; i <= 210; i++) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            pc[i] = pc[i - 1];
        }
        else{
            pc[i] = pc[i - 1] + 1;
        }
    }
}

int valid(int x) {
    
    int cycle = x / 210;
    int rem = x % 210;
    
    return ((cycle * pc[210]) + pc[rem]);
}

void solve() {
    int l, r;
    cin>>l>>r;
    
    cout<<valid(r) - valid(l - 1)<<"\n";
    
}

int32_t main() {
    
    optimize();
    
    int t;
    cin>>t;
    
    pre_compute();
    
    while(t--) {
        solve();
    }
    
    return 0;
}
