#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    
    int one {}, two {}, three {};
    vector<int>one_i;
    vector<int>two_i;
    vector<int>three_i;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i]==1){
            one++;
            one_i.push_back(i);
        }
        
        else if(arr[i]==2){
            two++;
            two_i.push_back(i);
        }
        
        else{
            three++;
            three_i.push_back(i);
        }
    }
    
    int team = min({one, two, three});
    
    cout<<team<<"\n";
    
    for(int i=0; i<team; i++){
        
        cout<<one_i[i]+1<<" "<<two_i[i]+1<<" "<<three_i[i]+1<<"\n";
        
    }
    
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    solve();
    
    
    
    return 0;
}