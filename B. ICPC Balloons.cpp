#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;


void solve() {
    
    int n {};
    cin>>n;
    
    string s;
    cin>>s;
    
    int balloons {};
    unordered_set<char>ss;
    
    for(char c : s){
        
        if(ss.count(c)){
            balloons++;
        }
        
        else{
            ss.insert(c);
            balloons += 2;
        }
    }
    
    cout<<balloons<<"\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        
        solve();
        
    }
    
    return 0;
}