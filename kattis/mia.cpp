#include <algorithm>
#include <iostream>
using namespace std;
int points(int n1, int n2) {
    if ((n1 == 1 && n2 == 2) || (n1 == 2 && n2 == 1)) {
        return 1000;
    } else if (n1 == n2) {
        return 900 + n1;
    } else {
        int h = max(n1, n2);
        int l = min(n1, n2);
        return h * 10 + l;
    }
}
int main() {
    int s0, s1, r0, r1;
    int p1p, p2p;
    while (cin >> s0 >> s1 >> r0 >> r1 && (s0 != 0 || s1 != 0 || r0 != 0 || r1 != 0)) {
        p1p = points(s0, s1);
        p2p = points(r0, r1);
        if (p1p > p2p) {
            cout << "Player 1 wins." << endl;
        } else if (p2p > p1p) {
            cout << "Player 2 wins." << endl;
        } else {
            cout << "Tie." << endl;
        }
    }
}
