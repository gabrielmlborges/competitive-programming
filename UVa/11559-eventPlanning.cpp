#include <climits>
#include <iostream>
using namespace std;
int main() {
    bool stayHome = true;
    int n;
    while (cin >> n) {
        int b, h, w;
        cin >> b >> h >> w;
        int minPrice = INT_MAX;
        stayHome = true;
        for (int j = 0; j < h; j++) {
            int p;
            cin >> p;
            bool pode = false;
            for (int i = 0; i < w; i++) {
                int a;
                cin >> a;
                if (a >= n) {
                    pode = true;
                }
            }
            if (pode && n * p <= b) {
                if (n * p <= minPrice) {
                    minPrice = n * p;
                    stayHome = false;
                }
            }
        }
        if (stayHome) {
            cout << "stay home\n";
        } else {
            cout << minPrice << "\n";
        }
    }
}
