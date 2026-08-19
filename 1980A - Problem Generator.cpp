#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    int ans = 0;

    for (char ch = 'A'; ch <= 'G'; ++ch) {
    
        int count = 0;
        for (char c : a) {
            if (c == ch) {
                count++;
            }
        }
        
        ans += max(0, m - count);
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
