#include<iostream>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    int max {}, count {};
    
    for(int i=0; i<n; i++) {
        
        int input {};
        cin>>input;
        
        if(input==0){
            count++;
            if(count>max){
                max = count;
            }
        }
        else{
            count = 0;
        }
    }
    
    cout<<max<<"\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--) {
        
        solve();
        
    }
    
    return 0;
}