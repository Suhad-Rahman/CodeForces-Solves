#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void solve() {
    
    int tv {}, capacity {};
    cin>>tv>>capacity;
    
    vector<int>arr;
    
    for(int i=0; i<tv; i++){
        int input {};
        cin>>input;
        
        if(input<0){
            arr.push_back(input);
        }
    }
    
    sort(arr.begin(), arr.end());
    
    int answer {};
    
    if(capacity>arr.size()){
        for(int i=0; i<arr.size(); i++){
            answer += arr[i];
        }
    }
    
    else{
    
        for(int i=0; i<capacity; i++){
            answer += arr[i];
        }
    }
    
    cout<<abs(answer);
    
    
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    
    return 0;
}