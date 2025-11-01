#include<iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, flag {};
    cin >> n >> m;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
        }
        else {

            if (i % 4 == 1) {
                for (int j = 0; j < m; j++) {

                    if (j == m - 1) {
                        cout << "#";
                    }
                    else {
                        cout << ".";
                    }

                }
            }

            else {
                for (int j = 0; j < m; j++) {
                    if (j == 0) {
                        cout << "#";
                    }
                    else {
                        cout << ".";
                    }
                }
            }


        }

        cout << "\n";

    }


    return 0;
}