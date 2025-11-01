#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        
        int n {};
        cin>>n;
        
        int count {}, multiplier {1};
        vector<int>arr(5);
        
        while(n!=0){
            
            int rem = n%10;
            rem *= multiplier;
            multiplier *= 10;
            
            if(rem!=0){
                arr[count] = rem;
                count++;
            }
            n = n/10;
        }
        
        cout<<count<<"\n";
        
        for(int i = 0; i<count; i++){
            cout<<arr[i];
            
            if(i<count-1){
                cout<<" ";
            }
        }
        
        cout<<"\n";
        
    }
    
    return 0;
}