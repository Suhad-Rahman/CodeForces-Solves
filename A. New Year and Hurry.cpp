#include<iostream>

using namespace std;

int main() {
    
    int n {}, k {};
    cin>>n>>k;
    
    int minutes = 240 - k;
    int problems {};
    
    for(int i = 1; i<=n; i++){
        
        if((5*i)<=minutes){
            problems++;
            minutes -= 5*i;
        }
        
        else{
            break;
        }
    
    }
    
    cout<<problems<<endl;
    
    return 0;
}