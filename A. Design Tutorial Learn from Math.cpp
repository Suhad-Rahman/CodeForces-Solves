#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

const int N = 1000001;
unordered_set<long long>prime;

void sieve() {
    
    vector<bool>is_prime(N, true);
    
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2; i*i<N; i++) {
        
        if(is_prime[i]){
        
            for(int j = i*i; j<N ; j += i){
                    is_prime[j] = false;
            }
        
        }
    }
    
    for(int i=2; i<N; i++){
        
        if(is_prime[i]){
            prime.insert(i);
        }
    }
}

int main() {
    
    int n {}, x {}, y {};
    cin>>n;
    
    sieve();
    
    if((n & 1)==0){
        x = n/2; y = n/2;
    }
    
    else{
        x = n/2;
        y = (n/2) + 1;
    }
    
    while(prime.count(x) || prime.count(y)){
        x--;
        y++;
    }
    
    cout<<x<<" "<<y;
    
    
    return 0;
}