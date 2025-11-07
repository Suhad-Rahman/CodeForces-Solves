#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    
    int max = arr[0];
    int min = arr[0];
    int amazing {};
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
            amazing++;
        }
        
        else if(arr[i]<min){
            min = arr[i];
            amazing++;
        }
    }
    
    cout<<amazing<<endl;
    
    return 0;
}