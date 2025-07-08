#include <iostream>
using namespace std;
int main() {
    int n, result;
    cin >> n;
    result = (n <= 2 ? 1 : n - 2);
    cout << result << endl;
}
