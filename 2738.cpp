#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> augend(N, vector<int>(M));
    vector<vector<int>> addend(N, vector<int>(M));

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            cin >> augend[n][m];
        }
    }

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            cin >> addend[n][m];
        }
    }

    for (int n = 0; n < N; ++n) {
        for (int m = 0; m < M; ++m) {
            int sum_element = augend[n][m] + addend[n][m];

            cout << sum_element << " ";
        }
        cout << "\n";
    }

    return 0;
}