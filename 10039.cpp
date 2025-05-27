#include <bits/stdc++.h>

using namespace std;

int main() {
	int sum = 0;

	for (int i = 0; i < 5; ++i) {
		int num;
		cin >> num;

		num = max(num, 40);

		sum += num;
	}

	int avg = sum / 5;

	cout << avg << endl;

    return 0;
}