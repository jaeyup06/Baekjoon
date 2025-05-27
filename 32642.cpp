#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;
    long long num = 0;

    while (N--) {
        long long anger;
        cin >> anger;

        sum += (anger == 0 ? -1 : 1);

        num += sum;
    }

    cout << num << endl;

    return 0;
}