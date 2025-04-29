#include <iostream>
using namespace std;

int main() {
    int N, M, max, min;

    cin >> N >> M;

	max = M;
	min = M;

	N--;

	while(N--) {
		cin >> M;

		if(M > max) max = M;
		if(M < min) min = M;
	}
	cout << min << " " << max << endl;

    return 0;
}