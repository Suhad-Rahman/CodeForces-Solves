#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
    int s {}, n {};
    
    cin>>s>>n;
    
    vector<pair<int, int>>d(n);
    
    for(int i=0; i<n; i++){
        cin>>d[i].first;
        cin>>d[i].second;
    }
    
    sort(d.begin(), d.end());
    
    for(int i=0; i<n; i++){
        
        if(d[i].first < s){
            
            s += d[i].second;
        }
        else{
            cout<<"NO";
                return 0;
        }
    }
    
        cout<<"YES";
    
    return 0;
}