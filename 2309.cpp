#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> heights(9);
    for (int i = 0; i < 9; ++i) {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    bool find = false;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int sum = 0;

            for (int n = 0; n < 9; ++n) {
                if ((n != i) && (n != j)) {
                    sum += heights[n];
                }
            }

            if (sum == 100) {
                for (int n = 0; n < 9; ++n) {
                    if ((n != i) && (n != j)) {
                        cout << heights[n] << "\n";
                    }
                }

                find = true;
                break;
            }
        }

        if (find == true) {
            break;
        }
    }

    return 0;
}