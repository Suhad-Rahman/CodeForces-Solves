#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n {};
    double l {};
    
    cin>>n>>l;
    
    vector<int>arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    double Distance_from_0 = (double)arr[0];
    double adjacent_distance = 0;
    
    for(int i=0; i<n-1; i++){
        int diff = arr[i+1]-arr[i];
        
        if(diff>adjacent_distance){
            adjacent_distance = diff;
        }
    }
    
    double distace_from_end = l - (double)arr[n-1];
    
    double d = max({Distance_from_0, adjacent_distance/2, distace_from_end});
    
    cout<<fixed<<setprecision(10)<<d<<endl;
    
    
}