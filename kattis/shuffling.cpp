#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    string word;
    cin >> n >> word;
    vector<int> original(n);
    for (int i = 0; i < n; i++) original[i] = i;
    vector<int> initial = original;
    vector<int> suffle(n, 0);
    int count = 0;
    do {
        if (word == "out") {
            if (n % 2 == 0) {
                for (int i = 0, j = 0; i < n / 2; i++, j += 2) {
                    suffle[j] = original[i];
                }
                for (int i = n / 2, j = 1; i < n; i++, j+= 2) {
                    suffle[j] = original[i];
                }
            } else {
                for (int i = 0, j = 0; i < (n / 2) + 1; i++, j += 2) {
                    suffle[j] = original[i];
                }
                for (int i = (n / 2) + 1, j = 1; i < n; i++, j+= 2) {
                    suffle[j] = original[i];
                }
            }
        } else {
            if (n % 2 == 0) {
                for (int i = 0, j = 1; i < n / 2; i++, j += 2) {
                    suffle[j] = original[i];
                }
                for (int i = n / 2, j = 0; i < n; i++, j+= 2) {
                    suffle[j] = original[i];
                }
            } else {
                for (int i = 0, j = 1; i < (n / 2) + 1; i++, j += 2) {
                    suffle[j] = original[i];
                }
                for (int i = (n / 2) + 1, j = 0; i < n; i++, j+= 2) {
                    suffle[j] = original[i];
                }
            }
        }
        original = suffle;
        count++;
    } while (original != initial);
    cout << count << endl;
}
