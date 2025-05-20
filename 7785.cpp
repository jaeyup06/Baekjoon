#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string name, recode;
    set<string> people;

    for (int i = 0; i < N; i++) {
        cin >> name >> recode;

        if (recode == "enter") {
            people.insert(name);
        } else {
            people.erase(name);
        }
    }

    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        cout << *it << "\n";
    }

    return 0;
}