#include<iostream>
#include<cmath>

using namespace std;

void solve(){
    
    int n {};
    long long sum {};
    cin>>n;
    
    while(n--){
        int input {};
        cin>>input;
        
        sum += input;
    }
    
    long long check = round(sqrt(sum));
    
    cout<<((check*check == sum) ? "YES\n" : "NO\n");
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t {};
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}