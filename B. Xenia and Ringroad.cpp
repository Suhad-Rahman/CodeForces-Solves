#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    
    int house_count {}, task_count {};
    cin>>house_count>>task_count;
    
    vector<int>arr(task_count);
    
    int initial_home = 1;
    long long Time {};
    
    for(int i=0; i<task_count; i++){
        cin>>arr[i];
        
        if(initial_home<=arr[i]){
            
            Time += arr[i] - initial_home;
            initial_home = arr[i];
            
        }
        
        else{
            
            Time += (house_count - initial_home) + arr[i];
            initial_home = arr[i];
            
        }
        
    }
    
    
    cout<<Time;
    
    
    
    
    
    return 0;
}