#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    int arr[n];
    arr[0] = 1;
    for (int i = 1; i < n; i++) {
        cin >> x;
        arr[x + 1] = i + 1;
    }
    for (int num : arr) {
        cout << num << " ";
    }
}
