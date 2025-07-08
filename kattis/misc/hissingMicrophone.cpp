#include <iostream>
using namespace std;
int main() {
    string i;
    bool actual = false;
    bool prev = false;
    bool first = true;
    cin >> i;
    for (char c : i) {
        if (c == 's') {
            actual = true;
        } else {
            actual = false;
        }
        if (first) {
            prev = actual;
            first = false;
            continue;
        }
        if (actual && prev) {
            cout << "hiss";
            return 0;
        }
        prev = actual;
    }
    cout << "no hiss";
    return 0;
}
