#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = b % 10;
    int d = (b / 10) % 10;
    int f = b / 100;

    cout << a * c << endl;
    cout << a * d << endl;
    cout << a * f << endl;
    cout << a * b << endl;

    return 0;
}