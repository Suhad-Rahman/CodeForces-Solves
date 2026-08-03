#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long

bool check(int n) {
    int tot_sum = (n * (n + 1)) / 2;
    int j = sqrtl(tot_sum);
    return j * j == tot_sum;
}

void solve() {
    int n;
    cin>>n;
    
    if(check(n)){
        cout<<-1<<"\n";
        return;
    }
    
    vector<int>res(n+1);
    
    for(int i = 1; i<= n; i++) {
        res[i] = i;
    }
    
    int k = 0;
    
    for(int i = 1; i<=n; i++) {
        
        while((k*k) < (i*(i+1)/2))k++;
        
        if((k*k) == (i*(i+1))/2) swap(res[i], res[i+1]);

    }
    
    for(int i = 1; i<=n; i++) {
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

int32_t main() {
	optimize();
	
	int t;
	cin>>t;
	
	while(t--) {
	    solve();
	}
	
	return 0;
}
