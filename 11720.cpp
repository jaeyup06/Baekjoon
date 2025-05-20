#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    string numbers;
    cin >> N >> numbers;

    for(int i = 0; i < N; i++) {
        sum += numbers[i] - '0';
    }

    cout << sum;

    return 0;
}