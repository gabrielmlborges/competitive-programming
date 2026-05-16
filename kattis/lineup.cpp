#include <iostream>
using namespace std;
int main() {
    bool decreasing = true;
    bool increasing = true;
    bool first = true;
    int n;
    cin >> n;
    string prev_name;
    string name;
    for (int i = 0; i < n; i++) {
        cin >> name;
        if (first) {
            first = false;
            prev_name = name;
            continue;
        }
        if (name > prev_name) {
            decreasing = false;
        } else {
            increasing = false;
        }
        prev_name = name;
    }
    if (decreasing) {
        cout << "DECREASING";
    } else if (increasing) {
        cout << "INCREASING";
    } else {
        cout << "NEITHER";
    }
}
