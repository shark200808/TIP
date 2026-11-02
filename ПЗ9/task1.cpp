#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string s;
    getline(in, s);

    string ban = "useragreementUSERAGREEMENT";

    for (int i = 0; i < s.length(); i++) {
        bool ok = true;
        for (int j = 0; j < ban.length(); j++) {
            if (s[i] == ban[j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            out << s[i];
        }
    }

    in.close();
    out.close();
    return 0;
}