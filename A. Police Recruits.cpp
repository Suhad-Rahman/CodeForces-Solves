#include<iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int police {}, crime {};
    
    for(int i=0; i<n; i++){
        
        int input;
        cin>>input;
        
        if(input<0 && police==0){
            crime++;
        }
        
        else{
            police += input;
        }
    }
    
    cout<<crime;
    
    return 0;
}