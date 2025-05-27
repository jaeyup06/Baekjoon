#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		for (int j = i; j > 0; --j) {
			cout << "*";
		}
		cout << "\n";
	}

    return 0;
}