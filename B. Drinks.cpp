#include<iostream>
#include<vector>
#include<iomanip> // for fixed and setprecision
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int sum {};
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum += x;
    }
    
    double answer = static_cast<double>(sum)/n;
    
    cout<<fixed<<setprecision(12)<<answer;
    
    
    return 0;
}