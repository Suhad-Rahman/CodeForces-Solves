#include <bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int rezero = 0, reone = 0;

    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            if (s[i] == '1') reone++;
            else rezero++;
        }
    }

    int diff = rezero - reone;
    int absolute = abs(rezero - reone);

    if (absolute > 3) {
        cout << -1 << "\n";
        return;
    }

    else {

        if (diff == 2) {
            if (s[0] == '1' || s[n - 1] == '1') cout << reone + rezero + 1 << "\n";
            else cout << -1 << "\n";
        }
        else if (diff == -2) {
            if (s[0] == '0' || s[n - 1] == '0') cout << rezero + reone + 1 << "\n";
            else cout << -1 << "\n";
        }
        else if (diff == 3) {
            if(s[0] == '1' && s[n - 1] == '1') cout << rezero + reone + 2 << "\n";
            else cout << -1 << "\n";
        }
        else if (diff == -3) {
            if(s[0] == '0' && s[n - 1] == '0') cout << rezero + reone + 2 << "\n";
            else cout << -1 << "\n";
        }
        else {
            cout << reone + rezero << "\n";
        }
    }
}


int32_t main() {
    optimize();

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}