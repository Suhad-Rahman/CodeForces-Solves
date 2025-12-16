#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    
    int n {}, pen {}, book {};
    cin>>n>>pen>>book;
    
    cout<<(min(pen, book) >= n ? "YES\n" : "NO\n");
}

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}