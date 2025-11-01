#include<iostream>
#include<string>

using namespace std;

int main() {
    
    string s;
    cin>>s;
    
    string r = "";
    
    int space_flag = 0;
    
    for(int i=0; i<s.length(); i++){
        if(i+2<s.length() && (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')){
           i+=2;
           
           if(space_flag==1){
               r += ' ';
           }
           
           space_flag = 0;
        }
        
        else{
            r += s[i];
            
            space_flag = 1;
        }
    }
    
    cout<<r;
    
    
    return 0;
}
