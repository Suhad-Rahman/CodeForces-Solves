#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int shop_count {};
    cin>>shop_count;
    
    vector<int>shops(shop_count);
    
    for(int i=0; i<shop_count; i++){
        cin>>shops[i];
    }
    
    sort(shops.begin(), shops.end());
    
    int days {};
    cin>>days;
    
    while(days--){
        
        int budget {};
        cin>>budget;
    
        auto it = upper_bound(shops.begin(), shops.end(), budget);
        
        
        cout<<it - shops.begin()<<"\n";
    }
    
    
    return 0;
}