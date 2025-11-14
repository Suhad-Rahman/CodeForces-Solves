#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    
    int row {}, col {};
    cin>>row>>col;
    
    (min(row, col) & 1) == 0 ? cout<<"Malvika" : cout<<"Akshat";
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    
    return 0;
}