#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

const int N = 1000001;

unordered_set<long long>T_prime;

void sieve(){
    
    vector<bool>prime(N, true);
    
    prime [0] = prime [1] = false;
    
    for(int i = 2; (long long)i*i<N; i++){
        
        if(prime[i]){
            
            for(int j = i*i; j<N; j+= i){
                prime[j] = false;
            }
            
        }
        
    }
    
    for(long long i =2; i<N; i++){
        
        if(prime[i]){
            T_prime.insert(i*i);
        }
        
    }
    
}



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    sieve();
    
    for(int i =0; i<n; i++){
        
        long long input;
        cin>>input;
        
        if(T_prime.count(input)){
            cout<<"YES\n";
        }
        
        else{
            cout<<"NO\n";
        }
    }
    
    
    
    
    
    
    return 0;
}