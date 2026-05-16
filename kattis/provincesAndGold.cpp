#include <iostream>
using namespace std;
int main() {
    int g, s, c, t;
    cin >> g >> s >> c;
    g *= 3;
    s *= 2;
    t = g + s + c;
    if (t >= 8) {
        cout << "Province " << "or" << " Gold" << endl;
    } else if (t >= 6) {
        cout << "Duchy " << "or" << " Gold" << endl;
    } else if (t >= 5) {
        cout << "Duchy " << "or" << " Silver" << endl;
    } else if (t >= 3) {
        cout << "Estate " << "or" << " Silver" << endl;
    } else if (t >= 2) {
        cout << "Estate " << "or" << " Copper" << endl;
    } else {
        cout << "Copper" << endl;
    }
}
