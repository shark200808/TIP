#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<int>> path(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    dp[0][0] = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                continue;
            }

            if (i == 0) {
                dp[i][j] = dp[i][j - 1] + a[i][j];
                path[i][j] = 1;
            }
            else if (j == 0) {
                dp[i][j] = dp[i - 1][j] + a[i][j];
                path[i][j] = 2;
            }
            else if (dp[i][j - 1] > dp[i - 1][j]) {
                dp[i][j] = dp[i][j - 1] + a[i][j];
                path[i][j] = 1;
            }
            else {
                dp[i][j] = dp[i - 1][j] + a[i][j];
                path[i][j] = 2;
            }
        }
    }

    cout << "Maximum sum: " << dp[n - 1][m - 1] << endl;

    vector<pair<int, int>> result;

    int i = n - 1;
    int j = m - 1;

    while (i != 0 || j != 0) {
        result.push_back({i, j});

        if (path[i][j] == 1) {
            j--;
        }
        else {
            i--;
        }
    }

    result.push_back({0, 0});

    reverse(result.begin(), result.end());

    for (auto p : result) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
