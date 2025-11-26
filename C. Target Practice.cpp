#include<iostream>


using namespace std;

void solve() {
    
    int score [10] [10] = {
    
                            {1,1,1,1,1,1,1,1,1,1},
                            {1,2,2,2,2,2,2,2,2,1},
                            {1,2,3,3,3,3,3,3,2,1},
                            {1,2,3,4,4,4,4,3,2,1},
                            {1,2,3,4,5,5,4,3,2,1},
                            {1,2,3,4,5,5,4,3,2,1},
                            {1,2,3,4,4,4,4,3,2,1},
                            {1,2,3,3,3,3,3,3,2,1},
                            {1,2,2,2,2,2,2,2,2,1},
                            {1,1,1,1,1,1,1,1,1,1}
                            
                         };
                            
    char input;
    int points {};
    
    for(int i = 0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>input;
            
            if(input == 'X'){
                points += score[i][j];
            }
        }
    }
    
    
    
    cout<<points<<"\n";
    
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