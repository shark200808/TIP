#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string toBin(long long n) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        res = char('0' + n % 2) + res;
        n /= 2;
    }
    return res;
}

int main() {
    ifstream in("input3.txt");
    ofstream out("output3.txt");

    string s;
    getline(in, s);

    string num = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num += s[i];
        } else {
            if (num != "") {
                long long n = stoll(num);
                out << toBin(n);
                num = "";
            }
            out << s[i];
        }
    }

    if (num != "") {
        long long n = stoll(num);
        out << toBin(n);
    }

    in.close();
    out.close();
    return 0;
}
