#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int arr[3] = {n1, n2, n3};
    sort(arr, arr + 3);
    int diff1 = arr[1] - arr[0];
    int diff2 = arr[2] - arr[1];
    if (diff1 > diff2) {
        cout << arr[0] + diff2;
    } else if (diff1 < diff2) {
        cout << arr[1] + diff1;
    } else {
        cout << arr[2] + diff2;
    }
}
