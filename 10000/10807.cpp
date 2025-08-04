#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> numbers;

    int N;
    cin >> N;

    while (N--) {
        int num;
        cin >> num;

        numbers.push_back(num);
    }

    int v;
    cin >> v;

    cout << count(numbers.begin(), numbers.end(), v) << endl;

    return 0;
}