#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream in("students.txt");
    ofstream out("result.txt");

    vector<string> names;
    vector<string> surnames;
    vector<double> scores;

    string name, surname;
    double score, sum = 0;

    while (in >> name >> surname >> score) {
        names.push_back(name);
        surnames.push_back(surname);
        scores.push_back(score);
        sum += score;
    }

    if (scores.empty()) {
        return 0;
    }

    double avg = sum / scores.size();

    for (size_t i = 0; i < scores.size(); i++) {
        if (scores[i] > avg) {
            out << names[i] << " " << surnames[i] << " " << scores[i] << "\n";
        }
    }

    in.close();
    out.close();
    return 0;
}