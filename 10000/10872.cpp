#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
	cin >> N;

	int factorial = 1;

	for (int i = N; i > 0; --i) {
		factorial *= i;
	}

	cout << factorial << endl;

    return 0;
}