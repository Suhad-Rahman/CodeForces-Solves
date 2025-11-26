#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int len {};
    int rem = n%10;
    
    while(n!=0){
        n /= 10;
        len ++;
    }
    
    cout<<10*(rem-1) + (len*(len+1))/2<<"\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
    
    
    return 0;
}