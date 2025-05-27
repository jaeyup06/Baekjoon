#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int c;

    while (n--) {
        c = a + b;
        a = b;
        b = c;
    }

	cout << a << endl;

    return 0;
}
