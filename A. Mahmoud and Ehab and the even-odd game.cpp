#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    cout<<(n%2 ? "Ehab\n" : "Mahmoud\n");
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}