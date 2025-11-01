#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    vector<int>cube(100);
    int n;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        
        cin>>cube[i];
        
    }
    
        sort(cube.begin(), cube.begin()+n);
        
        for(int i=0; i<n; i++){
    
    cout<<cube[i]<<" ";
    
        }
    
    return 0;
}