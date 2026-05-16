#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x, y, t;
    cin >> x >> y;
    if (y == 1 && x == 0) {
        cout << "ALL GOOD" << endl;
        return 0;
    }
    if (y == 1) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    t = x / (1 - y);
    cout << fixed << setprecision(10) << t << endl;
}
