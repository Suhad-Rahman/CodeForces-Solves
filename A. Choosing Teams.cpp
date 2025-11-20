#include<iostream>

using namespace std;

void solve() {
    
    int n {}, k {};
    cin>>n>>k;

    int count {};
    
    while(n--){
        int input {};
        cin>>input;
        
        if(input<=(5-k)){
            count++;
        }
    }
    
    cout<<count/3;
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}