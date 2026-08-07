#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    string s;
    cin>>s;
    
    sort(s.rbegin(), s.rend());
    
    cout<<(s[0] - 'a')+1<<"\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}