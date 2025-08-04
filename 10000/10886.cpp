#include <bits/stdc++.h>

using namespace std;

int main() {
    int people;
    cin >> people;

    int yes = 0;
    int no = 0;

    for (int comments; 0 < people; --people) {
        cin >> comments;

        if (comments == 1)
            ++yes;
        else
            ++no;
    }

    cout << (yes > no ? "Junhee is cute!" : "Junhee is not cute!") << endl;

    return 0;
}