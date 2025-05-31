#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int self_number_test = 1; self_number_test <= 10000;
         ++self_number_test) {
        bool is_generated = false;

        int start = max(1, self_number_test - 9 * 5);

        for (int generator_test = start; generator_test <= self_number_test;
             ++generator_test) {
            int temp_number = generator_test;

            vector<int> generator_test_digits;

            while (temp_number > 0) {
                generator_test_digits.push_back(temp_number % 10);
                temp_number /= 10;
            }

            int generator_test_result = generator_test;

            for (int i = 0; i < generator_test_digits.size(); ++i) {
                generator_test_result += generator_test_digits[i];
            }

            if (self_number_test == generator_test_result) {
                is_generated = true;
                break;
            }
        }

        if (!is_generated) {
            cout << self_number_test << "\n";
        }
    }

    return 0;
}