#include <iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int a, b;

	a = N / 2;
	b = N - a;

	cout << (a + 1) * (b + 1) << endl;

    return 0;
}