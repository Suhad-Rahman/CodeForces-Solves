#include<iostream>
#include<string>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
    
    string s;
    int n{}, k{}, res{}, i{};
    
    cin>>n>>k>>s;
    
    long long last {-k};
    
    for(int i=0; i<n; i++){
        
        if(s[i]=='1' && i-last>=k){
            res++;
        }
        
        if(s[i]=='1'){
            last=i;
        }
        
    }
    
    cout<<res<<'\n';
    
    
    }
    
    return 0;
    
}