#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int>arr(4);
    
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int total_sum = arr[3];
    
    int a,b,c;
    
    a = total_sum - arr[0];
    b = total_sum - arr[1];
    c = total_sum - arr[2];
    
    cout<<a<<" "<<b<<" "<<c<<endl;
    
    
    
    return 0;
}