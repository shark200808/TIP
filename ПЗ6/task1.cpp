#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,a,x;
    a=1;
    cin >> n;
    vector<vector<int>> h(n);
    for (int i = 0; i<n; i++) {
        x=0;
        a++;
        do {
            h[i].push_back(0);
            x++;
        }
        while (x<=n-a);
        x=0;
        h[i].push_back(1);
        while (h[i].size()<n) {
            h[i].push_back(2);
        }
    }
    for (int i = 0; i<h.size(); i++) {
        for (int j = 0; j < h.size(); j++) {
            cout << h[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i=0; i<n; i++) {
        for (int j =0; j<n; j++) {
            if (j<n-1-i) cout << 0;
            else if (j==n-1-i) cout << 1;
            else cout << 2;
            if (j+1 < n) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
