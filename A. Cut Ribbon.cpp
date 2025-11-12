#include<iostream>
#include<algorithm>

using namespace std;

int max_piece = -1;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n {}, a {}, b {}, c {};
    cin>>n>>a>>b>>c;
    
    for(int x=0; x*a<=n; x++){
        
        int len_a = x*a;
        
        int remaining_len = n - len_a;
        
        for(int y=0; y*b<=remaining_len; y++){
            
            int len_ab = y*b;
            
            int len_to_cover = remaining_len - len_ab;
            
            if(len_to_cover % c==0){
                
                int z = len_to_cover/c;
                
                int total_piece = x+y+z;
                
                max_piece = max(max_piece, total_piece);
                
            }
        }
    }
    
    cout<<max_piece;
    
    
    return 0;
}