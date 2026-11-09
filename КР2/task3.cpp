#include <iostream>

using namespace std;

void f(int n, int from, int to, int help) {
    if (n == 0) {
        return;
    }
    f(n - 1, from, help, to);
    cout << "Ingredient " << n << " move from " << from << " to " << to << endl;
    f(n - 1, help, to, from);
}

int main() {
    int n;
    cin >> n;
    f(n, 1, 3, 2);
    return 0;
}
