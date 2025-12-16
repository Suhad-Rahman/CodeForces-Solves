#include<iostream>
#include<string>

using namespace std;

void solve(){
    
    int rating {}, threshold {}, delta {}, n {};
    cin>>rating>>threshold>>delta>>n;
    
    int contest {};
    
    string rounds {};
    cin>>rounds;
    
    for (char c : rounds){
        
        if(c == '1' || rating < threshold){
            
            rating -= delta;
            contest++;
        }
    }
    cout<<contest<<"\n";
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