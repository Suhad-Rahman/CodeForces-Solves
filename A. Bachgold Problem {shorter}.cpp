#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int count = n/2;
    
    cout<<count<<"\n";
    
    if(!(n%2)){
        for(int i=0; i<count; i++){
            cout<<2<<" ";
        }
        return;
    }
    
    for(int i=0; i<count-1; i++){
        cout<<2<<" ";
    }
    cout<<3;
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}