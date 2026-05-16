#include <iostream>
using namespace std;
int main() {
    int t;
    string sites[10];
    int relevance[10];
    cin >> t;
    for (int i = 0; i < t; i++) {
        int max_relevance = 0;
        for (int k = 0; k < 10; k++) {
            cin >> sites[k] >> relevance[k];
            if (relevance[k] > max_relevance) {
                max_relevance = relevance[k];
            }
        }
        cout << "Case #" << i + 1 << ":" << endl;
        for (int j = 0; j < 10; j++) {
            if (relevance[j] == max_relevance) {
                cout << sites[j] << endl;
            }
        }
    }
}
