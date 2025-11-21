#include<iostream>

using namespace std;

void solve() {
    
    string x;
    cin>>x;
    
    for(int i=0; i<x.length(); i++){
        
        int invert = 9 - ((int)x[i] - '0');
        
        if(invert > -1 && invert < ((int)x[i] - '0')){
            
            if(i==0 && invert<1){
                continue;
            }
            
            else{
            x[i] = (char)invert + '0';
            }
            
        }
    }
    
    cout<<x;
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}