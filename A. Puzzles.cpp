#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int student {}, puzzle {};
    
    cin>>student>>puzzle;
    
    vector<int>arr(puzzle);
    
    for(int i=0; i<puzzle; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int min_diff = arr[student-1] - arr[0];
    
    for(int i=0; i<=puzzle - student; i++){
        
        int diff = arr[i+student-1] - arr[i];
        
        if(diff<min_diff){
            min_diff = diff;
        }
    }
    
    cout<<min_diff;
    
    
    
    return 0;
}
