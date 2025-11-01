#include<iostream>

using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
    
    int a {}, b {}, rem {};
    
    cin>>a>>b;
    
    if(a%b==0){
        cout<<0<<endl;
    }
    
    else{
        rem = a%b;
        cout<<b-rem<<endl;
    }
    
    }
    
    
    return 0;
}