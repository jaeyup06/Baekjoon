#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<char>> letters(5, vector<char>(15));

    for (int y = 0; y < 5; ++y) {
        string letter;
        cin >> letter;

        for (int x = 0; x < letter.size(); ++x) {
            letters[y][x] = letter[x];
        }
    }

    for (int x = 0; x < 15; ++x) {
        for (int y = 0; y < 5; ++y) {
            if (letters[y][x] != '\0') {
                cout << letters[y][x];
            }
        }
    }

    return 0;
}