#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int n, c;
        cin >> n >> c;

        vector < int > arr(n);

        for (int & x: arr) {
            cin >> x;
        }

        sort(arr.rbegin(), arr.rend());
        int destroyed_free {};

        for (int x: arr) {

            if ((1LL << destroyed_free) * x <= c) {
                destroyed_free++;
            }

        }

        cout << n - destroyed_free << "\n";

    }

    return 0;
}