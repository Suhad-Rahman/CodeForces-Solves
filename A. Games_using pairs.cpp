#include<iostream>
#include<vector>

using namespace std;

int main () {
    
    int n;
    cin>>n;
    
    
    vector<pair<int, int>>jersey(n);
    
    for(int i=0; i<n; i++){
        cin>>jersey[i].first>>jersey[i].second;
    }
    
    int count {};
    
    for(int i=0; i<n; i++){
        for(int j = 0 ; j<n; j++){
            
            if(i==j){
                continue;
            }
            
            if(jersey[i].first==jersey[j].second){
                count++;
            }
        }
    }
    
    
    cout<<count;
    
    return 0;
}