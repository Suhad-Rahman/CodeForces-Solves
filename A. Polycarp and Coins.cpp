#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    long long one {}, two {}, odin {}, dva {};
    
    //operation floor
    
    two = n/3;
    one = n - two*2;
    
    //operation ceil(integer)
    
    dva = (n+2)/3;
    odin = n - dva*2;
    
    ((abs(one - two) < abs(odin - dva)) ? cout<<one<<" "<<two : cout<<odin<<" "<<dva);
    cout<<"\n";
    
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