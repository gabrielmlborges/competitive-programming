#include <iostream>
using namespace std;
int main() {
    int n, x, y, z, result, c;
    c = 1;
    while (true) {
        cin >> n;
        if (n == 0) {
            return 0;
        }
        y = 0;
        z = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) {
                y++;
            } else {
                z++;
            }
        }
        result = z - y;
        cout << "Case " << c << ": " << result << endl;
        c++;
        }
}
