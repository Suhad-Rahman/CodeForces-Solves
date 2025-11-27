#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int arr[n];
    int min = 1e9;
    int index {-1};
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    
    arr[index] += 1;
    
    int product {1};
    
    for(int i=0; i<n; i++){
        product *= arr[i];
    }
    
    cout<<product<<"\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
    
        solve ();
    
    }
    
    return 0;
}