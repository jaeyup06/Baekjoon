#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> states(N, vector<char>(M));

    for (int y = 0; y < N; ++y) {
        string state;
        cin >> state;

        for (int x = 0; x < M; ++x) {
            states[y][x] = state[x];
        }
    }

    int none_line_X = 0;
    int none_line_Y = 0;

    for (int x = 0; x < M; ++x) {
        bool line_state = false;

        for (int y = 0; y < N; ++y) {
            if (states[y][x] == 'X') {
                line_state = true;
                break;
            }
        }

        if (line_state == false) {
            none_line_X++;
        }
    }

    for (int y = 0; y < N; ++y) {
        bool line_state = false;

        for (int x = 0; x < M; ++x) {
            if (states[y][x] == 'X') {
                line_state = true;
                break;
            }
        }

        if (line_state == false) {
            none_line_Y++;
        }
    }

    cout << max(none_line_X, none_line_Y) << endl;

    return 0;
}