#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    string numbers;
    cin >> N >> numbers;

    int sum = 0;

    for (int i = 0; i < N; ++i) {
        sum += numbers[i] - '0';
    }

    cout << sum << endl;

    return 0;
}