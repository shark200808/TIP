#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,a;
    int n,c;
    cin >> s >> n;

    for (int i = 1; i < n; i++) {
        a = "";
        c = 0;

        for (int j = 0; j < s.size(); j++) {
            c++;
            if (s[j] != s[j + 1]) {
                a += s[j];
                a += to_string(c);
                c = 0;
            }
        }

        s = a;
    }

    cout << s << endl;
    return 0;
}
