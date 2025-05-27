#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int B;
        string test_case;
        cin >> B >> test_case;

        string right_case;

        for (int j = 0; j < test_case.length(); j++) {
            if(test_case[j] == 'O') {
                right_case += "0";
            } else {
                right_case += "1";
            }
        }

        cout << "Case #" << i + 1 << ": ";

        for (int j = 0; j < right_case.length(); j += 8) {
            string part_case = right_case.substr(j, 8);

            int value = 0;

            for (int k = 0; k < part_case.length(); ++k) {
                value = value * 2 + (part_case[k] - '0');
            }

            cout << static_cast<char>(value);
        }

        cout << "\n";
    }

    return 0;
}