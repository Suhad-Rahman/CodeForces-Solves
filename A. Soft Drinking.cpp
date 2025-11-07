#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    
    int n {}, k {}, l {}, c {}, d {}, p {}, nl {}, np {};
    
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int drinks = k*l/nl;
    int limes = c*d;
    int salt = p/np;
    
    int toast = min({drinks, limes, salt})/n;
    
    cout<<toast<<endl;
    
    return 0;
}