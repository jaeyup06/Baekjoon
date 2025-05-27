#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    char last_char = 'A';
    int total_time = 0;

    for (int i = 0; i < S.length(); ++i) {
        if (abs(last_char - S[i]) > 26 - abs(last_char - S[i])) {
            total_time += 26 - abs(last_char - S[i]);
        } else {
            total_time += abs(last_char - S[i]);
        }

        last_char = S[i];
    }

    cout << total_time << endl;

    return 0;
}