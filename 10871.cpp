#include <iostream>
using namespace std;

int main() {
    int N, X;

    cin >> N >> X;

	while(N--) {
		int A;

		cin >> A;

		if(A < X) cout << A << " ";
	}

    return 0;
}