#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    int num {};
    
    int even {}, odd{}, even_index {}, odd_index{};
    
    for(int i=0; i<n; i++) {
        cin>>num;
        
        if((num & 1)==0){
            even++;
            even_index=i + 1;
        }
        else{
            odd++;
            odd_index=i + 1;
        }
        
        if((even==1 && odd>=2) || odd==1 && even>=2){
            break;
        }
    }
    
    if(even>odd){
        cout<<odd_index;
    }
    else{
        cout<<even_index;
    }
    
    return 0;
}