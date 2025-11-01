#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int n;
    cin>>n;
    
    unordered_map<string, int>List;
    
    while(n--){
        
        string s;
        cin>>s;
        
        auto it = List.find(s);
        
        if(it==List.end()){
            cout<<"OK\n";
            
            List[s] = 1;
        }
        
        else{
            int count = it->second;
            string ans = s + to_string(count);
            
            cout<<ans<<"\n";
            
            it->second++;
        }
        
    }
    
    
    
    
    
    return 0;
}