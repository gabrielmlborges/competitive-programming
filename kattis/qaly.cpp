#include <iostream>
using namespace std;
int main() {
    int input;
    double x, y;
    double result = 0;
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> x >> y;
        result += x * y;
    }
    cout << result << endl;
}
