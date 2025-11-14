#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_ride {}, special_ride {}, oneway_cost {}, special_cost {}, total_cost {};
    
    cin>>total_ride>>special_ride>>oneway_cost>>special_cost;
    
    int rem = (total_ride % special_ride);
    
    total_cost = (total_ride/special_ride)*special_cost + min(special_cost, rem*oneway_cost);
    
    if(special_ride*oneway_cost<special_cost){
        cout<<total_ride*oneway_cost;
    }
    
    else{
        cout<<total_cost;
    }
    
    return 0;
}