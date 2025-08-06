#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, t;
    cin >> N >> t;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    int sum;

    switch (t) {
        case 1: {
            cout << 7 << '\n';
            break;
        }
        case 2: {
            if (A[0] > A[1]) {
                cout << "Bigger\n";
            } else if (A[0] == A[1]) {
                cout << "Equal\n";
            } else {
                cout << "Smaller\n";
            }
            break;
        }
        case 3: {
            vector<int> temp = {A[0], A[1], A[2]};
            sort(temp.begin(), temp.end());
            cout << temp[1] << '\n';
            break;
        }
        case 4: {
            sum = 0;
            for (int x : A) {
                sum += x;
            }
            cout << sum << '\n';
            break;
        }
        case 5: {
            sum = 0;
            for (int x : A) {
                if (x % 2 == 0) {
                    sum += x;
                }
            }
            cout << sum << '\n';
            break;
        }
        case 6: {
            for (int x : A) {
                cout << char((x % 26) + 97);
            }
            cout << '\n';
            break;
        }
        case 7: {
            vector<bool> visited(N, false);
            int i = 0;
            while (true) {
                if (i < 0 || i >= N) {
                    cout << "Out\n";
                    break;
                } else if (i == N - 1) {
                    cout << "Done\n";
                    break;
                } else if (visited[i]) {
                    cout << "Cyclic\n";
                    break;
                }
                visited[i] = true;
                i = A[i];
            }
            break;
        }
    }
}
