#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int min_diff = 1e9;
    
    vector<int>strength(n);
    
    for(int i=0; i<n; i++){
        cin>>strength[i];
    }
    
    sort(strength.begin(), strength.end());
    
    for(int i=0; i<n-1; i++){
        
        int diff = abs(strength[i] - strength[i+1]);
        if(diff < min_diff){
            min_diff = diff;
        }
    }
    
    cout<<min_diff<<"\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}