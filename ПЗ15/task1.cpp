#include <iostream>
#include <vector>

using namespace std;

void makeComb(int arr[], int n, int k, int start, vector<int>& cur) {
    if ((int)cur.size() == k) {
        for (int i = 0; i < k; i++) {
            cout << cur[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = start; i < n; i++) {
        cur.push_back(arr[i]);
        makeComb(arr, n, k, i + 1, cur);
        cur.pop_back();
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> cur;
    makeComb(arr, n, k, 0, cur);
    return 0;
}