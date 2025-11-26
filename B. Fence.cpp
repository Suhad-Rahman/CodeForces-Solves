#include<iostream>
#include<vector>

using namespace std;


void solve() {
    
    int fence {}, piano_width {};
    cin>>fence>>piano_width;
    
    vector<int>height(fence);
    int sum {};
    
    for(int i=0; i<fence; i++){
        cin>>height[i];
    }
    
    for(int i=0; i<piano_width; i++){
        sum += height[i];
    }
    
    
    
    int minimum_height = sum, index {1};
    
    for(int i=piano_width; i<fence; i++){
        sum = sum - height[i-piano_width] + height[i];
        
        if(sum<minimum_height){
            minimum_height = sum;
            
            index = i - piano_width + 1 + 1;
        }
    }
    
    
    
    cout<<index;
    
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}