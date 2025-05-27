#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

	int max_value = M;
	int min_value = M;

	N--;
	while (N--) {
		cin >> M;

		max_value = max(max_value, M);
		min_value = min(min_value, M);
	}

	cout << min_value << " " << max_value << endl;

    return 0;
}