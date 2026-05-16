#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int priceJuice = 0;
        int priceMile = 0;
        while (n--) {
            int call;
            cin >> call;
            priceJuice += 15 * ((60 + call) / 60);
            priceMile += 10 * ((30 + call) / 30);
        }
        if (priceJuice > priceMile) cout << "Case " << i + 1 << ": Mile " << priceMile << '\n';
        else if (priceJuice < priceMile) cout << "Case " << i + 1 << ": Juice " << priceJuice << '\n';
        else cout << "Case " << i + 1 << ": Mile Juice " << priceJuice << '\n';
    }
}
