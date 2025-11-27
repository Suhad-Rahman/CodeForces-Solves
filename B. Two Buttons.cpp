#include<iostream>

using namespace std;


void solve() {
    
    int n {}, m {};
    cin>>n>>m;
    
    int move {};
    
    while(m>n){
    
            if(m & 1){
                m++;
                move++;
            }
            
            else{
                m /= 2;
                move++;
            }
    }
    
    if(n>m){
        move += n-m;
    }
    
    cout<<move;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}