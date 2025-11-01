#include<iostream>
#include<string>

using namespace std;

int main() {
    
    string p;
    
    cin>>p;
    
    for (char c:p){
        if(c=='H' || c=='Q' || c=='9'){
            cout<<"YES"<<endl;
        
            return 0;
        }
    }
    
        cout<<"NO"<<endl;
    
    
    return 0;
}