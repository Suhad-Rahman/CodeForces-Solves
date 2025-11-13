#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        
        int a {}, b {};
        cin>>a>>b;
        
        int n = abs(a-b);
        
        cout<<(n+9)/10<<"\n";
    
    }
    
    return 0;
}