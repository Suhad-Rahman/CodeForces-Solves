#include<iostream>
#include<algorithm>
#include<cmath>


using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, taxi {}, one{}, two{}, three{}, four{};
    cin>>n;
    
    int team;
    
    for(int i=0; i<n; i++) {

        cin>>team;
        
        if(team==1){
            one++;
        }
        else if(team==2){
            two++;
        }
        else if(team==3){
            three++;
        }
        else if(team==4){
            four++;
        }
        
    }
    
    taxi = four;
    
    taxi += three;
    
    one = max(0, one-three);
    
    taxi += two/2;
    
    two = two%2;
    
    if(two==1){
        taxi++;
        one = max(0, one-2);
    }
    
    if(one>0){
        taxi += ceil((double)one/4);
    }
    
    
    
    
    cout<<taxi;
    
    return 0;
}