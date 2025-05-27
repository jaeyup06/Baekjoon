#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

	int M = N;

	N++;

	while (N--) {
		for(int i = M - N; i > 0; --i) {
			cout << " ";
		}
		for(int i = N * 2 - 1; i > 0; --i) {
			cout << "*";
		}
		cout << "\n";
	}

    return 0;
}