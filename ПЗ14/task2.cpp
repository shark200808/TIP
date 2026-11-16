#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string s;
    set<string> words;

    // Считываем каждое слово по отдельности
    while (cin >> s) {
        // Убираем точки и запятые, если они прилипли к слову сзади или спереди
        if (s.back() == '.' || s.back() == ',' || s.back() == '?' || s.back() == '!') {
            s.pop_back();
        }

        words.insert(s);
    }

    // Выводим уникальные слова
    for (string w : words) {
        cout << w << endl;
    }

    return 0;
}
