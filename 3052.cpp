#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> remainders;

    for (int i = 0; i < 10; ++i) {
        int remainder;
        cin >> remainder;

        if (find(remainders.begin(), remainders.end(), remainder % 42) == remainders.end()) {
            remainders.push_back(remainder % 42);
        }
    }

    cout << remainders.size() << endl;

    return 0;
}