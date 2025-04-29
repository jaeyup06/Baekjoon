#include <iostream>
using namespace std;

int main() {
    int N, i;

	cin >> N;

	for(int i = 1; i < N + 1; i++) {
		for(int j = i; j > 0; j--) {
			cout << "*" << "";
		}
		cout << endl;
	}

    return 0;
}