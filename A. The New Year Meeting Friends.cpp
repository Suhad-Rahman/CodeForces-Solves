#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int distance = max({a,b,c}) - min({a,b,c});
    
    cout<<distance;
    
    return 0;
}