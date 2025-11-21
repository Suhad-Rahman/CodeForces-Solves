#include<iostream>
#include<cmath>

using namespace std;

void solve() {
    
    int y {}, w {};
    cin>>y>>w;
    
    int numerator = (6 - max(y,w)) + 1;
    
    int denominator {6};
    
    while((numerator % 2 == 0) && (denominator % 2 == 0)){
        numerator /= 2;
        denominator /=2;
    }
    
    while((numerator % 3 == 0) && (denominator % 3 == 0)){
        numerator /= 3;
        denominator /= 3;
        
    }
    
    cout<<numerator<<"/"<<denominator;
    
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    
    return 0;
}