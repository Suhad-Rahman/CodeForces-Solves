#include<iostream>
#include<algorithm>

using namespace std;


void solve() {
    
    int a {}, b {};
    cin>>a>>b;
    
    int width = (min(a, b))*2;
    int length = a+b - (width/2);

    
    cout<<((length>width) ? length*length : width*width)<<"\n";
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