#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int count[10] = {0};

    cin >> a >> b >> c;

    int num = a * b * c;

    while (num > 0) {
        int i = num % 10;
        count[i]++;
        num /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout << count[i] << endl;
    }

    return 0;
}