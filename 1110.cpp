#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cycle;
    cycle.push_back(N);

    do {
        if (N < 10) {
            N = N * 10 + N;
        } else {
            int sum = (N / 10) + (N % 10);
            N = (N % 10) * 10 + (sum % 10);
        }

        cycle.push_back(N);
    } while (cycle[0] != N);

    cout << cycle.size() - 1 << endl;

    return 0;
}