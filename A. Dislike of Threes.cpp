#include<iostream>
#include<unordered_map>

using namespace std;

void solve() {
    
    int k {};
    cin>>k;
    
    int k_th {};
    
    for(int i=1; i<=k; i++){
        
        if(i%3 ==0 || i%10 == 3){
            k++;
        }
        
    }
    
    cout<<k<<"\n";
    
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    
    while(t--) {
        
       solve();
        
    }
    
    return 0;
}