#include<iostream>
#include<string>

using namespace std;

int  main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int dot {}, hash {};
        
        bool flag = true;
        
        for(char c : s) {
            
            if(c =='.'){
                dot++;
            }
            else{
                hash++;
            }
            
        }
        
        if(dot==0){
            cout<<dot<<"\n";
            continue;
        }
        
        else{
            
            for(int i=1; i<s.size()-1; i++) {
                
                if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.') {
                    cout<<"2\n";
                    flag = false;
                    break;
                }
                
            }
            
            if(flag==true){
            cout<<dot<<"\n";
            }
            
        }
        
        
    }
    return 0;
}