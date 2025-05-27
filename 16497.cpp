#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec(31, 0);

    int N;
    cin >> N;

    while (N--) {
        int loan_date, return_date;
        cin >> loan_date >> return_date;

        for (int i = loan_date; i < return_date; ++i) {
            vec[i] += 1;
        }
    }

    int number_of_books;
    cin >> number_of_books;

    for (int i = 0; i <= vec.size(); ++i) {
        if (vec[i] > number_of_books) {
            cout << 0 << endl;

            break;
        } else if (i == vec.size()) {
            cout << 1 << endl;
        }
    }

    return 0;
}