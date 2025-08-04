#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> people;

    int N;
    cin >> N;

    string name, recode;

    for (int i = 0; i < N; ++i) {
        cin >> name >> recode;

        if (recode == "enter") {
            people.insert(name);
        } else {
            people.erase(name);
        }
    }

    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}