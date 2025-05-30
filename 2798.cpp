#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    int closest_sum = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = cards[i] + cards[j] + cards[k];

                if (sum <= M && sum > closest_sum) {
                    closest_sum = sum;
                }
            }
        }
    }

    cout << closest_sum << endl;

    return 0;
}