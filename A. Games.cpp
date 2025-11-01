#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, count {};
    cin>>n;
    
    vector<int>home(n);
    vector<int>away(n);
    
    for(int i=0; i<n; i++){
        cin>>home[i];
        cin>>away[i];
    }
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){
            
            if(home[i]==away[j]){
                count++;
            }
            
        }
        
    }
    
    cout<<count;
    
    return 0;
}