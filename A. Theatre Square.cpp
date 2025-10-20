#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    int n {}, m {}, a {};
    
    cin>>n>>m>>a;
    
    unsigned long long n_tiles {}, m_tiles {};
    
    n_tiles = ceil((double)n/a);
    m_tiles = ceil((double)m/a);
    
    cout<< n_tiles * m_tiles;
    
    
    return 0;
}