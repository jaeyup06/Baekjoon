#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int total_score = 0;
        int last_score = 1;

        string OX;
        cin >> OX;

        for (int i = 0; i < OX.length(); ++i) {
            if (OX[i] == 'O') {
                total_score += last_score;
                last_score++;
            } else {
                last_score = 1;
            }
        }

        cout << total_score << endl;
    }

    return 0;
}