#include <iostream>
using namespace std;

int main() {
    double x;
    double result;

    cout << "Введите x: ";
    cin >> x;

    // Упрощенное выражение: 0,6(4x-3)+2,1(x-5) = 4,5x-12,3
    result = 4.5 * x - 12.3;

    cout << "Результат: " << result << endl;

    return 0;
}
