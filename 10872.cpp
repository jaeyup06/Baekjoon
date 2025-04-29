#include <iostream>
using namespace std;

int main() {
    int N;
	int sum = 1;

	cin >> N;

	for(int i = N; i > 0; i--) {
		sum *= i;
	}
	cout << sum << endl;

    return 0;
}