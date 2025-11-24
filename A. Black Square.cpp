#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    int a_1 {}, a_2 {}, a_3 {}, a_4 {};
    cin>>a_1>>a_2>>a_3>>a_4;
    
    string s;
    cin>>s;
    
    long long calorie {};
    
    for(char c : s){
        
        if(c == '1'){
            calorie += a_1;
        }
        
        else if(c == '2'){
            calorie += a_2;
        }
        
        else if(c == '3'){
            calorie += a_3;
        }
        
        else{
            calorie += a_4;
        }
    }
    
    cout<<calorie;
    
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}