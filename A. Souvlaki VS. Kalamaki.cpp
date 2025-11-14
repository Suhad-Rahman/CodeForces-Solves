#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
    
        int n;
        cin>>n;
    
        int arr[n+1];
    
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
    
        sort(arr+1, arr+n+1);
        
        bool flag = true;
    
        for(int i=2; i<n; i += 2) {
            if(arr[i] != arr[i+1]){
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
    
        if(flag){
            cout<<"YES\n";
        }
    }
    
    return 0;
}