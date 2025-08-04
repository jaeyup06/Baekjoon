#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> paper(100, vector<int>(100, 0));

    int N;
    cin >> N;

    while (N--) {
        int X, Y;
        cin >> X >> Y;

        for (int y = Y; y < Y + 10; ++y) {
            for (int x = X; x < X + 10; ++x) {
                paper[y][x] = 1;
            }
        }
    }

    int black_zone = 0;

    for (int y = 0; y < 100; ++y) {
        for (int x = 0; x < 100; ++x) {
            if (paper[y][x] == 1) {
                black_zone++;
            }
        }
    }

    cout << black_zone << endl;

    return 0;
}