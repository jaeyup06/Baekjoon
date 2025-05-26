#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int B;
        string test_case, right_case;
        cin >> B >> test_case;

        for(int i = 0; i < test_case.length(); i++) {
            if(test_case[i] == 'O') {
                right_case += "0";
            }
            else {
                right_case += "1";
            }
        }

        cout << "Case #" << i + 1 << ": ";

        for(int i = 0; i < right_case.length(); i += 8) {
            string part_case = right_case.substr(i, 8);
            int value = 0;

            for(int j = 0; j < part_case.length(); j++) {
                value = value * 2 + (part_case[j] - '0');
            }

            cout << static_cast<char>(value);
        }

        cout << endl;
    }

    return 0;
}