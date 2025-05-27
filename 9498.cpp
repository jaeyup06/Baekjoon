#include <bits/stdc++.h>

using namespace std;

int main() {
	int score;
	cin >> score;

	char result;

    if (score >= 90) {
        result = 'A';
    } else if (score >= 80) {
        result = 'B';
    } else if (score >= 70) {
        result = 'C';
    } else if (score >= 60) {
        result = 'D';
    } else {
        result = 'F';
    }

    cout << result << endl;

    return 0;
}