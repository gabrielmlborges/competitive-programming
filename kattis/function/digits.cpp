#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    while (cin >> input && input != "END") {
        int steps = 1;
        string current = input;

        while (true) {
            string next = to_string(current.length());
            if (next == current) break;
            current = next;
            steps++;
        }

        cout << steps << endl;
    }
    return 0;
}
