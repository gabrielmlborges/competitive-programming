#include <iostream>
using namespace std;
int main() {
    int n, g, x, y, position;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> g;
        y = 12345;
        for (int k = 0; k < g; k++) {
            cin >> x;
            if (y == 12345) {
                y = x;
                continue;
            }
            if (x - y != 1) {
                position = k;
            }
            y = x;

        }
        cout << position << endl;
    }
}
