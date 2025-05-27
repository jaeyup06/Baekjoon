#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> prices(N);
    cin >> prices[0];
    int prev = prices[0];
    int start = prices[0];

    int max_profit = 0;

    for (int i = 1; i < N; ++i) {
        cin >> prices[i];

        if (prices[i] > prev) {
            if (prices[i] - start > max_profit) {
             max_profit = prices[i] - start;
            }
        } else {
            start = prices[i];
        }
        prev = prices[i];
    }

    cout << max_profit << endl;

    return 0;
}