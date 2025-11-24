#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    
    int n; 
    cin>>n;
    
    vector<string>s(n);
    
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    
    sort(s.begin(), s.end());
    
    cout<<s[n/2];
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}