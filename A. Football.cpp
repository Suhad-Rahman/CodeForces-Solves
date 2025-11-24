#include<iostream>
#include<vector>

using namespace std;

void solve() {
    
    int n;
    cin>>n;
    
    string team_01;
    cin>>team_01;
    
    string team_02;
    
    int count_01 {1}, count_02 {};
    
    n -= 1;
    
    while(n--){
        
        string input;
        cin>>input;
        
        if(input == team_01){
            count_01++;
        }
        
        else{
            
            team_02 = input;
            count_02++;
        }
    }
    
    cout<<(count_01>count_02 ? team_01 : team_02);
    
}



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}