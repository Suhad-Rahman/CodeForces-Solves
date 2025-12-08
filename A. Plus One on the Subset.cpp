#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int minimum = 1e9, maximum = -1e9;
    
    while(n--){
        
        int input {};
        cin>>input;
        
        if(input<minimum){
            minimum = input;
        }
        
        if(input>maximum){
            maximum = input;
        }
    }
    cout<<maximum - minimum<<"\n";
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