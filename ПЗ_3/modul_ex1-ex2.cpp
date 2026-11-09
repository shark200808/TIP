#include <iostream>
#include <math.h>
using namespace std;

namespace mkad {
    const int a = 109;

    int f(int v, int t) {
        return ((v*t%a+a)%a);
    }


    void ex2() {
        int v,t;
        cin >> v >> t;
        cout << f(v,t) << endl;
    }
}

namespace gip {
    void ex1() {
        int a,b;
        cin >> a >> b;
        int c = pow(pow(a,2)+pow(b,2),0.5);
        cout << c;
    }
}

int main() {
    mkad::ex2();
    gip::ex1();
    return 0;
}
