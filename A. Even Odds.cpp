#include<iostream>

using namespace std;

int main(){
    
    unsigned long long int n {}, k {};
    
    cin>>n>>k;
    
    unsigned long long int mid {}, pos {};
    
    mid = (n+1)/2;
    
    if(k<=mid){
        cout<<(2*k)-1;
    }
    
    else{
        pos = k-mid;
        
        cout<<pos*2;
    }
    
    
    
    return 0;
}