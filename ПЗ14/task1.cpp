#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int open = 0;
    int close = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            open++;
        } else if (s[i] == ')') {
            close++;
        }
    }
    
    // Если количество открывающих и закрывающих вообще не равно — сразу кринж
    if (open != close) {
        cout << "no";
    } else {
        cout << "yes";
    }
    
    return 0;
}