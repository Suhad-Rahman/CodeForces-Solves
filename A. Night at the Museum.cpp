#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

void solve() {
    
    string s;
    cin>>s;
    
    char x = 'a', y;
    int total_length = 26;
    int move {};
    
    for (char c : s){
        
        y = c;
        
        move += min(abs(x-y), total_length - abs(x-y));
    
        x = y;
    }
    
    cout<<move;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}