#include <iostream>
using namespace std;

int main() {
    int mkad=109;
    int v,t;
    cin >> v >> t;
    int s = (v*t%mkad+mkad)%mkad;
    cout<<s;
    return 0;
}
