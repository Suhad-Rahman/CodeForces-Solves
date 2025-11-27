#include<iostream>
#include<map>

using namespace std;


void solve() {
    
    int n {};
    cin>>n;
    
    map<int, int>a;
    long long pairs {};
    
    
    for(int i=0; i<n; i++){
        int input;
        cin>>input;
        
        int diff = input - i;
        
        pairs += a[diff];
        a[diff]++;
        
        
    }
    
    
    cout<<pairs<<"\n";
    
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