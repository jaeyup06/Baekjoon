#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> total_scores(5, 0);

    for (int player = 0; player < 5; ++player) {
        for (int round = 0; round < 4; ++round) {
            int score;
            cin >> score;

            total_scores[player] += score;
        }
    }

    int winner_index = 0;
    int max_score = total_scores[0];

    for (int i = 1; i < 5; ++i) {
        if (total_scores[i] > max_score) {
            max_score = total_scores[i];
            winner_index = i;
        }
    }

    cout << winner_index + 1 << " " << max_score << endl;

    return 0;
}