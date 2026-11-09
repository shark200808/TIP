#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    char symbol;
    cin >> a >> b >> c;
    cin >> symbol;

    if (symbol == 'R') {
        cout << "Ivanov Ivan" << endl;
    }

    else if (symbol == 'c') {
        double d, x1, x2;

        if (a == 0 && b == 0 && c == 0) {
            cout << "x - любое действительное число" << endl;
        }
        else if (a == 0 && b == 0) {
            cout << "Корней нет" << endl;
        }
        else if (a == 0) {
            x1 = -c / b;
            cout << "x = " << x1 << endl;
        }
        else {
            d = b * b - 4 * a * c;
            if (d < 0) {
                cout << "Корней нет" << endl;
            }
            else if (d == 0) {
                x1 = -b / (2 * a);
                cout << "x = " << x1 << endl;
            }
            else {
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
        }
    }
    else if (symbol == 's') {
        double r, side, s1, s2;
        cin >> r >> side;
        s1 = 3.14 * r * r;
        s2 = side * side;

        if (s1 > s2) {
            cout << "Круг: " << s1 << endl;
        }
        else if (s2 > s1) {
            cout << "Квадрат: " << s2 << endl;
        }
        else {
            cout << "Площади равны: " << s1 << endl;
        }
    }

    return 0;
}
