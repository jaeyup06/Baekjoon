#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> jeminiseu(9);
    for (int i = 0; i < 9; ++i) {
        cin >> jeminiseu[i];
    }

    vector<int> geollibeoseu(9);
    for (int i = 0; i < 9; ++i) {
        cin >> geollibeoseu[i];
    }

    int sum_jeminiseu = 0;
    int sum_geollibeoseu = 0;

    for (int i = 0; i < 9; ++i) {
        sum_jeminiseu += jeminiseu[i];

        if (sum_jeminiseu > sum_geollibeoseu) {
            cout << "Yes" << endl;
            break;
        } else if (i == 8) {
            cout << "No" << endl;
        }

        sum_geollibeoseu += geollibeoseu[i];
    }

    return 0;
}