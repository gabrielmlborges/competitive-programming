#include <iostream>
using namespace std;
int main() {
    long long inputs, number, result;
    cin >> inputs;
    for (int i = 0; i < inputs; i++) {
        cin >> number;
        result = ((((((number * 567) / 9) + 7492) * 235) / 47) - 498);
        result = abs((result % 100) / 10);
        cout << result << endl;
    }
}
