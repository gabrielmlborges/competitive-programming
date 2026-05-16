#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;

        vector<vector<int>> need(n);
        vector<int> value(n);

        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            need[i].resize(k);
            for (size_t j = 0; j < need[i].size(); j++) {
                cin >> need[i][j];
                --need[i][j];
            }
            cin >> value[i];
        }

        vector<int> have(m);
        for (int i = 0; i < m; i++) cin >> have[i];

        long long total = 0;
        for (int i = 0; i < n; i++) {
            int qtd = have[need[i][0]];
            for (size_t j = 1; j < need[i].size(); j++) {
                qtd = min(qtd, have[need[i][j]]);
            }
            total += 1LL * qtd * value[i];
        }

        cout << total << '\n';
    }
}
