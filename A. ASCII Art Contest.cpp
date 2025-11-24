#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    
    int g {}, c {}, l {};
    cin>>g>>c>>l;
    
    int minimum = min({g, c, l});
    int maximum = max({g, c, l});
    
    if((maximum - minimum) >=10){
        cout<<"check again";
        return;
    }
    
    int sum = g+c+l;
    
    cout<<"final "<<sum - (maximum+minimum);
    
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}