#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;
    for (int i = 1; i < N; ++i) {
        sum += 1LL * i * (N + 1);
    }

    cout << sum << endl;

    return 0;
}