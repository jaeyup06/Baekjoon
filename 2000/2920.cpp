#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> ascending = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> descending = {8, 7, 6, 5, 4, 3, 2, 1};

    vector<int> eum(8);
    for (int i = 0; i < 8; ++i) {
        cin >> eum[i];
    }

    if (eum == ascending) {
        cout << "ascending" << endl;
    } else if (eum == descending) {
        cout << "descending" << endl;
    } else {
        cout << "mixed" << endl;
    }

    return 0;
}