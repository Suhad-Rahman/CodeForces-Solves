#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int count {};
    bool flag = false;
    
    while(n != 0){
        
        if(n==3){
            count++;
            flag = true;
            break;
        }
        n -= 2;
        count++;
    }
    
    cout<<count<<"\n";
    
    if(!flag){
       
        while(count--){
            cout<<2<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=0; i<count-1; i++){
        cout<<2<<" ";
    }
    
    cout<<3<<"\n";
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}