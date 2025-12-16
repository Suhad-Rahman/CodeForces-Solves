#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void solve() {
    
    int boys {}, girls {}, team {}, j {};
    vector<int>boys_skill;
    vector<int>girls_skill;
    
    cin>>boys;
    
    for(int i=0; i<boys; i++){
        int input {};
        cin>>input;
        
        boys_skill.push_back(input);
    }
    
    cin>>girls;
    
    for(int i=0; i<girls; i++){
        int input {};
        cin>>input;
        
        girls_skill.push_back(input);
    }
    
    sort(boys_skill.begin(), boys_skill.end());
    sort(girls_skill.begin(), girls_skill.end());
    
    int size = min(boys, girls);
    
    for(int i=0; i<boys; i++){
        for(int j=0; j<girls; j++){
            
            if(abs(boys_skill[i] - girls_skill[j]) <= 1){
                girls_skill[j] = 102;
                team++;
                break;
            }
            
        }
    }
    
    cout<<team<<"\n";
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}