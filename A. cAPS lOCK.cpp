#include<iostream>
#include<string>

//to use toupper() & tolower() [from C]
#include<cctype>

using  namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    
    int flag = 0;
    int len = s.length();
    
    for(int i = 1; i<len; i++) {
        
        if(islower(s[i])){
            flag =1;
            break;
        }
        
    }
    
    if(flag==0){
        
        for(char& c : s){
            
            if(isupper(c)){
                c = tolower(c);
            }
            else{
                c = toupper(c);
            }
        }
    }
    
    cout<<s;
    
    return 0;
}