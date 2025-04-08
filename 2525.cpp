#include <iostream>
using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	int minute = A * 60 + B + C;

	A = minute / 60 % 24;
	B = minute % 60;

	cout << A << " " << B << endl;

    return 0;
}