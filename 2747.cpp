#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, c;

    cin >> n;

    while(n--) {
        c = a + b;
        a = b;
        b = c;
    }

	cout << a << endl;

    return 0;
}
