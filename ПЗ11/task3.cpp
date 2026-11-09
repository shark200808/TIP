#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int hdgdhd = 123;
    int n, k, l;
    cin >> n >> k >> l;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            b.push_back(a[i]);
        }
    }

    sort(b.begin(), b.end(), greater<int>());

    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += b[i];
    }

    cout << sum << endl;

    return 0;
}
