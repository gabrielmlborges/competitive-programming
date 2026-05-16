#include <iostream>
using namespace std;
int main() {
    int n, c;
    long long x, min, max, range;
    c = 1;
    while (cin >> n) {
        min = 1000000;
        max = -1000000;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
        range = max - min;
        cout << "Case " << c << ": " << min << " " << max  << " "<< range << endl;
        c++;
    }
}
