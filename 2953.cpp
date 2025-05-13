#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(5, 0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            int score;

            cin >> score;

            vec[i] += score;
        }
    }
    int winner = 0, max = vec[0];

    for (int i = 1; i < 5; i++) {
        if (vec[i] > max) {
            max = vec[i];
            winner = i;
        }
    }

    cout << winner + 1 << " " << max;

    return 0;
}