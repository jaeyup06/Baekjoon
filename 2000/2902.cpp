#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.length();

    string name = "";
    name += S.front();

    for (int i = 1; i < N; ++i) {
        if (S[i] == '-') {
            name += S[i + 1];
        }
    }

    cout << name << endl;

    return 0;
}