#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<char>> mirror(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        string image;
        cin >> image;

        for (int j = 0; j < N; ++j) {
            mirror[i][j] = image[j];
        }
    }

    int psychology;
    cin >> psychology;

    if (psychology == 1) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << mirror[i][j];
            }
            cout << '\n';
        }
    } else if (psychology == 2) {
        for (int i = 0; i < N; ++i) {
            for (int j = N - 1; j >= 0; --j) {
                cout << mirror[i][j];
            }
            cout << '\n';
        }
    } else {
        for (int i = N - 1; i >= 0; --i) {
            for (int j = 0; j < N; ++j) {
                cout << mirror[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}