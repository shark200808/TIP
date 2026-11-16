#include <iostream>
#include <vector>

using namespace std;

class MyStack {
    vector<int> data;
    vector<int> mins;
public:
    void push(int x) {
        data.push_back(x);
        if (mins.empty() || x <= mins.back()) {
            mins.push_back(x);
        } else {
            mins.push_back(mins.back());
        }
    }

    void pop() {
        if (!data.empty()) {
            data.pop_back();
            mins.pop_back();
        }
    }

    bool empty() {
        return data.empty();
    }

    int getMin() {
        return mins.back();
    }
};

int main() {
    MyStack st;
    return 0;
}