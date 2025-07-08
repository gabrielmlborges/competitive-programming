#include <iostream>
using namespace std;
int main() {
    int t, n, num;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int arr[n];
        int p = 0;
        for (int k = 0; k < n; k++) {
            cin >> str;
            if (str == "LEFT") {
                p--;
                arr[k] = -1;
            }else if (str == "RIGHT") {
                p++;
                arr[k] = 1;
            } else {
                cin >> str >> num;
                p += arr[num - 1];
                arr[k] = arr[num - 1];
            }
        }
        cout << p << endl;
    }
}
