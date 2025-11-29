#include<iostream>
#include<string>

using namespace std;

void solve() {
    
    int n {};
    cin>>n;
    
    string s;
    cin>>s;
    
    int sum_1 {}, sum_2 {};
    
    for(int i=0; i<n; i++){
        if(s[i]!= '4' && s[i] != '7'){
            cout<<"NO";
            return;
        }
        
        else{
        
        if(i<n/2){
            sum_1 += (s[i] - '0');
        }
        
        else{
            sum_2 += (s[i] - '0');
        }
        
        }
    
    }
    
    cout<<(sum_1 == sum_2 ? "YES" : "NO");
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    
    return 0;
}