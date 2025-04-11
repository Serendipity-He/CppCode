#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test_case = 0; test_case < t; ++test_case) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<vector<string>> b(m, vector<string>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> b[i][j];
            }
        }

        bool possible = true;
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] != "*") {
                bool found = false;
                for (int i = 0; i < m; ++i) {
                    if (b[i][j] == a[j]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    possible = false;
                    break;
                }
                count++;
            }
        }

        if (possible) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}    