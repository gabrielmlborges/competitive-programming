#include <iostream>
using namespace std;
int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (a == 0 || b == 0 || c == 0 || n < 3 || n > (a + b + c)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}
