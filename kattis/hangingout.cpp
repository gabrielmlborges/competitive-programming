#include <iostream>
using namespace std;
int main() {
    int l, x, inside, num, count;
    string action;
    inside = 0;
    count = 0;
    cin >> l >> x;
    for (int i = 0; i < x; i++) {
        cin >> action >> num;
        if (action == "enter") {
            if (num + inside > l) {
                count++;
            } else {
                inside += num;
            }
        } else {
            inside -= num;
        }
    }
    cout << count;
}
