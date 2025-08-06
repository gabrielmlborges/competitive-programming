#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, C;
    while (cin >> A >> C && (A || C)) {
        vector<int> h(C);
        for (int i = 0; i < C; i++) cin >> h[i];

        int prev = A;
        long long liga = 0;
        for (int curr : h) {
            if (curr < prev) liga += prev - curr;
            prev = curr;
        }

        cout << liga << '\n';
    }
    return 0;
}
