#include<iostream>
#include<string>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    
    for(int i=0; i<=s.size(); i++){
        
        if(s[i]=='.'){
            cout<<0;
        }
        
        else if(s[i]=='-'){
            
            if(s[i+1]=='.'){
                cout<<1;
                i += 1;
            }
            
            else{
                cout<<2;
                i+=1;
            }
            
            
        }
        
        
    }
    
    
    
    return 0;
}