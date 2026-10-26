#include <iostream>

using namespace std;

long long f(long long a, long long n) {
    long long res = 1;
    long long x = a;
    long long y = n;

    while (y > 0) {
        if (y % 2 == 1) {
            res = res * x;
        }
        x = x * x;
        y = y / 2;
    }

    return res;
}

long long f2(long long a, long long n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 1) {
        return a * f2(a, n - 1);
    }

    long long h = f2(a, n / 2);
    return h * h;
}

int main() {
    long long a, n;
    cin >> a >> n;

    cout << f(a, n) << endl;
    cout << f2(a, n) << endl;

    return 0;
}
