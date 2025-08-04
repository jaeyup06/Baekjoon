#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;

	int a = N / 2;
	int b = N - a;

	cout << (a + 1) * (b + 1) << endl;

    return 0;
}