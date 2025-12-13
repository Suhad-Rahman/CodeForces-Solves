#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
    
    int n {}, k_moves {}, j {}, sum {};
    cin>>n>>k_moves;
    
    vector<int>a;
    vector<int>b;
    
    for(int i=0; i<n; i++){
        int input {};
        cin>>input;
        
        a.push_back(input);
    }
    
    for(int i=0; i<n; i++){
        int input {};
        cin>>input;
        
        b.push_back(input);
    }
    
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    
    for(int i=0; i<k_moves; i++){
        
        if(a[i]<b[j]){
            
            a[i] = b[j];
            j++;
        
        }
    }
    
    for(int x : a){
        sum += x;
    }
    cout<<sum<<"\n";
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