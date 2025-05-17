#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, max = 0, temp, start;
    cin >> N;
    vector<int> vec(N);

    cin >> vec[0];
    temp = vec[0];
    start = vec[0];

    for (int i = 1; i < N; i++) {
        cin >> vec[i];
        if (vec[i] > temp) {
            if (vec[i] - start > max) {
             max = vec[i] - start;
            }
        } else {
            start = vec[i];
        }
        temp = vec[i];
    }

    cout << max;

    return 0;
}