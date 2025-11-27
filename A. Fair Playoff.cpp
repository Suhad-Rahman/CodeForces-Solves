#include<iostream>
#include<algorithm>

using namespace std;

void solve() {
    
    int s1 {}, s2 {}, s3 {}, s4 {};
    cin>>s1>>s2>>s3>>s4;
    
    int team_1_to_finale {}, team_2_to_finale {};
    int disq_1 {}, disq_2 {};
    
    team_1_to_finale = (s1>s2 ? s1 : s2);
    team_2_to_finale = (s3>s4 ? s3 : s4);
    
    disq_1 = min(s1,s2);
    disq_2 = min(s3, s4);
    
    if(disq_1 > team_2_to_finale || disq_2 > team_1_to_finale){
        cout<<"NO\n";
        return;
    }
    
    cout<<"YES\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        
        solve();
        
    }
    
    return 0;
}