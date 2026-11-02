#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");
    ofstream out("output2.txt");

    string x, y;
    getline(in1, x);
    getline(in2, y);

    if (x.find(y) != string::npos) {
        out << "yes";
    } else {
        out << "no";
    }

    in1.close();
    in2.close();
    out.close();
    return 0;
}