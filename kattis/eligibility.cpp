#include <iostream>
using namespace std;
int main() {
    int input, y, m, d, yy, mm, dd, c;
    string name;
    char slash;
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> name >> y >> slash >> m >> slash >> d >> yy >> slash >> mm >> slash >> dd >> c;
        if (y >= 2010 || yy >= 1991) {
            cout << name << " eligible" << endl;
        } else if (c < 41) {
            cout << name << " coach petitions" << endl;
        } else {
            cout << name << " ineligible" << endl;
        }
    }
}
