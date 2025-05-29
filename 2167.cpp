#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> vec(N, vector<int>(M));

    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < M; ++x) {
            cin >> vec[y][x];
        }
    }

    int K;
    cin >> K;

    while (K--) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        i--; j--; x--; y--;

        int sum = 0;

        for (int row = i; row <= x; ++row) {
            for (int col = j; col <= y; ++col) {
                sum += vec[row][col];
            }
        }

        cout << sum << "\n";
    }

    return 0;
}