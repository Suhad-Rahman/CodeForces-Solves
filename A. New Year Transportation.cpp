#include<iostream>

using namespace std;

void solve() {
    
    int n {}, t {};
    cin>>n>>t;
    
    int arr[n+1];
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    
    arr[n] = 1;
    
    for(int i=1; i<=n; i += arr[i]){
        if(i==t){
            cout<<"YES"<<"\n";
            return;
        }
    }
    
    cout<<"NO\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}