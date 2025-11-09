#include<iostream>
#include<vector>
#include<algorithm>

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
    
    int sereja {}, dima {};
    int i {};
    int j = n-1;
    int turn {1};
    
    while(n--){
        
        if(turn == 1){
        
            if(arr[i]>arr[j]){
                sereja += arr[i];
                
                i++;
                turn = 2;
            }
            
            else{
                sereja += arr[j];
                
                j--;
                turn = 2;
            }
            
        }
        
        else{
            if(arr[i]>arr[j]){
                dima += arr[i];
                
                i++;
                turn = 1;
            }
            
            else{
                dima += arr[j];
                
                j--;
                turn = 1;
            }
        }
        
    }
    
    cout<<sereja<<" "<<dima;
    
    
    return 0;
}