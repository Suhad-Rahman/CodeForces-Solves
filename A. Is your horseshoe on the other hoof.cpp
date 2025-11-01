#include<iostream>

#include<set>

using namespace std;

int main() {
    
    int s1, s2, s3, s4;
    
    cin>>s1>>s2>>s3>>s4;
    
    set<int>color;
    
    color.insert(s1);
    color.insert(s2);
    color.insert(s3);
    color.insert(s4);
    
    
    cout<<4-color.size()<<endl;
    
    return 0;
}