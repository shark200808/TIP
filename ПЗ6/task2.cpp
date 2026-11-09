#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, m, w;
    cin >> n >> m >> w;
    vector<string> v(n, string(m, '0'));
    vector<int> v1(w), v2(w);
    for (int i = 0; i < w; i++) {
        cin >> v1[i] >> v2[i];
        v1[i]--;
        v2[i]--;
        v[v1[i]][v2[i]] = '*';
    }
    for (int i = 0; i < w; i++) {
        for (int x = v1[i] - 1; x <= v1[i] + 1; x++) {
            for (int y = v2[i] - 1; y <= v2[i] + 1; y++) {
                if (x >= 0 && x < n && y >= 0 && y < m && v[x][y] != '*') {
                    v[x][y]++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}
