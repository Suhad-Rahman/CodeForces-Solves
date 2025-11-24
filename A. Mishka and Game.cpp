#include<iostream>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    int m {}, c {};
    int m_win {}, c_win {};
    
    for(int i=0; i<n; i++){
        
        cin>>m>>c;
        
        if(m>c){
            m_win++;
        }
        
        else if(c>m){
            c_win++;
        }
    }
    
    if(m_win==c_win){
        cout<<"Friendship is magic!^^";
        return;
    }
    
    cout<<(m_win>c_win ? "Mishka" : "Chris");
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}