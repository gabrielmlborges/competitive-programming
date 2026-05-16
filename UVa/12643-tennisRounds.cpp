#include <iostream>
using namespace std;
int main() {
    int rounds, seed1, seed2;
    while (cin >> rounds >> seed1 >> seed2) {
        int actualRound = 1;
        while (seed1 != seed2) {
            seed1 = (seed1 + 1) / 2;
            seed2 = (seed2 + 1) / 2;
            if (seed1 == seed2) {
                break;
            }
            actualRound++;
        }
        cout << actualRound << endl;
    }
}
