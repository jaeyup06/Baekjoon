#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> chessboard(N);
    for (int i = 0; i < N; ++i) {
        string row;
        cin >> row;

        for (int j = 0; j < row.size(); ++j) {
            chessboard[i].push_back(row[j]);
        }
    }

    int min_miss_paint = N * M;

    for (int row_start = 0; row_start <= N - 8; ++row_start) {
        for (int col_start = 0; col_start <= M - 8; ++col_start) {
            int B_start_miss_paint = 0;
            int W_start_miss_paint = 0;

            for (int row = row_start; row < row_start + 8; ++row) {
                for (int col = col_start; col < col_start + 8; ++col) {
                    if ((row + col) % 2 == 0) {
                        if (chessboard[row][col] == 'W') {
                            B_start_miss_paint++;
                        } else {
                            W_start_miss_paint++;
                        }
                    } else {
                        if (chessboard[row][col] == 'B') {
                            B_start_miss_paint++;
                        } else {
                            W_start_miss_paint++;
                        }
                    }
                }
            }

            min_miss_paint =
                min(min_miss_paint, min(B_start_miss_paint, W_start_miss_paint));
        }
    }

    cout << min_miss_paint << endl;

    return 0;
}