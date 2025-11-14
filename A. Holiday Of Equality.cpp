#include<iostream>
#include<vector>

using namespace std;

void solve() {
    
    int citizens {}, total_burles {};
    cin>>citizens;
    
    vector<int>arr;
    
    int max {-1};
    
    for(int i=0; i<citizens; i++){
        int x;
        cin>>x;
        
        arr.push_back(x);
        
        if(x>max){
            max = x;
        }
    }
    
    for(int &x : arr){
        
        total_burles += max - x;
        
    }
    
    cout<<total_burles;
    
}




int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    solve();
    
    return 0;
}