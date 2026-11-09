
#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<char>> a;
vector<vector<bool>> used;

int best = 0;
bool found = false;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, int count) {
    if (a[x][y] == 'P') {
        count++;
    }

    if (a[x][y] == 'E') {
        if (!found || count > best) {
            best = count;
        }
        found = true;
        return;
    }

    used[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (a[nx][ny] != '1' && !used[nx][ny]) {
                dfs(nx, ny, count);
            }
        }
    }

    used[x][y] = false;
}

int main() {
    cin >> n >> m;

    a.resize(n, vector<char>(m));
    used.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    if (a[0][0] != '1') {
        dfs(0, 0, 0);
    }

    if (found) {
        cout << best << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}

