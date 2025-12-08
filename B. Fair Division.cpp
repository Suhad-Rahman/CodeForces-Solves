#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int one {}, two {};
    
    while(n--){
        
        int input {};
        cin>>input;
        
        if(input==1){
            one++;
        }
        
        else{
            two++;
        }
    }
    
    if((one + 2*two) % 2 == 1){
        cout<<"NO\n";
        return;
    }
    
    else{
        int sum = (one + two*2)/2;
        
     if(sum % 2 == 0 || (sum % 2 == 1 && one != 0)){ 
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
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