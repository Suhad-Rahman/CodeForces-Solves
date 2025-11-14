#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    int bacteria {};
    
    while(n){
        
        if((n & 1)){
            bacteria++;
        }
        
        n >>= 1;
    }
    
    cout<<bacteria;
    
    return 0;
}