#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    int balance {};
    cin>>balance;
    
    if(balance>=0){
        cout<<balance;
        return;
    }
    
    else{
        
        int final_balance_1 = balance/10;
        int final_balance_2 = (balance/100)*10 + (balance % 10);
        
        if(final_balance_2 > final_balance_1){
            cout<<final_balance_2;
            return;
        }
        else{
            cout<<final_balance_1;
            return;
        }
        
        
    }
    
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}