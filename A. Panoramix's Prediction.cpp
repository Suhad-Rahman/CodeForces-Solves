#include<iostream>
#include<vector>

using namespace std;

const int N = 51;
vector<int>store;

void sieve() {
    
    vector<bool>prime(N, true);
    
    prime [0] = prime[1] = false;
    
    for(int i=2; i*i<N; i++){
        
        if(prime[i]){
            
            for(int j= i*i; j<N; j+= i){
                
                prime[j] = false;
                
            }
            
        }
        
        
    }
    
    for(int i=2; i<N; i++){
        if(prime[i]){
            store.push_back(i);
        }
    }
    
}

void solve() {
        int n {}, m{};
        cin>>n>>m;
    
        for(int i=0; i<15 ;i++){
        
            if(store[i]==n && store [i+1]==m){
                cout<<"YES";
                return;
            }
        }
    
        cout<<"NO";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    solve();
    
    return 0;
}