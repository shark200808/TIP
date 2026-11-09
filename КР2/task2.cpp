#include <iostream>

using namespace std;

long long f(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return f(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << f(a, b) << endl;

    return 0;
}
