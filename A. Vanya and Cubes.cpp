#include<iostream>

using namespace std;


void solve() {
    
    int n {};
    cin>>n;
    
    int count {}, h {};
    
    while(count<=n){
        h++;
        count += (h*(h+1))/2;
    }
    
    cout<<h-1;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
