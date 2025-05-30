#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    int max_money = 0;

    while (N--) {
        map<int, int> dice_score;
        vector<int> dice;

        for (int i = 0; i < 4; ++i) {
            int n;
            cin >> n;
            dice_score[n]++;

            if (find(dice.begin(), dice.end(), n) == dice.end()) {
                dice.push_back(n);
            }
        }

        int money = 0;

        if (dice.size() == 1) {
            money += 50000;
            money += dice[0] * 5000;
        } else if (dice.size() == 2) {
            if (dice_score[dice[0]] == 3) {
                money += 10000;
                money += dice[0] * 1000;
            } else if (dice_score[dice[1]] == 3) {
                money += 10000;
                money += dice[1] * 1000;
            } else {
                money += 2000;
                money += dice[0] * 500;
                money += dice[1] * 500;
            }
        } else if (dice.size() == 3) {
            for (int i = 0; i < 3; ++i) {
                if (dice_score[dice[i]] == 2) {
                    money += 1000;
                    money += dice[i] * 100;
                    break;
                }
            }
        } else {
            int max_eyes = 0;
            for (int i = 0; i < 4; ++i) {
                max_eyes = max(max_eyes, dice[i]);
            }

            money += max_eyes * 100;
        }

        max_money = max(max_money, money);
    }

    cout << max_money << endl;

    return 0;
}