#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define int long long

void solve() {
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>> matrix(n, vector<int>(m)); 
    int mx = -1; 
    
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            cin>>matrix[i][j]; 
            mx = max(mx, matrix[i][j]); 
        } 
    } 

    vector < int > row_cnt(n, 0);
    vector < int > col_cnt(m, 0);
    int total_mx_cnt = 0;

    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            if(matrix[i][j] == mx) {
                row_cnt[i]++;
                col_cnt[j]++;
                total_mx_cnt++;
            }
        } 
    } 

    bool f = false; 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            int intersection = (matrix[i][j] == mx) ? 1 : 0;
            int covered_by_pair = row_cnt[i] + col_cnt[j] - intersection;

            if(covered_by_pair == total_mx_cnt) { 
                f = true; 
                break; 
            } 
        } 
        if(f) break;
    } 

    cout <<((f) ? mx - 1 : mx) << "\n"; 
}


int32_t main() {
    optimize();
    
    int t;
    cin>>t;
    
    while(t--) solve();
    
    return 0;
}
