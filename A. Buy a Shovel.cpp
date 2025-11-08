#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k {}, r {};
    cin>>k>>r;
    
    int rem {};
    
    for(int i=1; i<=10; i++){
        
        rem = (i*k) % 10;
        
        if(rem==r){
            cout<<i;
            
            return 0;
        }
        
    }
    
    for(int i = 1; i<=10; i++){
        k = k*i;
        
        if(k % 10 == 0){
            cout<<i;
            
            return 0;
        }
    }
    
    return 0;
}