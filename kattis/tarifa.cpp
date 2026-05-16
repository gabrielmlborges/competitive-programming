#include <iostream>
using namespace std;
int main() {
    int x,n,p,r;
    cin >> x >> n;
    r = x * (n + 1);
    for (int i = 0; i < n; i++) {
        cin >> p;
        r -= p;
    }
    cout << r << endl;
}
