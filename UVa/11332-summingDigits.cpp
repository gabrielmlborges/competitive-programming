#include <iostream>
using namespace std;
int sumDigits(int n) {
    int soma = 0;
    while (n != 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}
int main() {
    int x;
    while (cin >> x && x != 0) {
        while (x >= 10) {
            x = sumDigits(x);
        }
        cout << x << endl;
    }
}
