#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(32, 0);
    for (int i = 0; i < N; ++i) {
        int start, end;
        cin >> start >> end;
        for (int d = start; d < end; ++d) {
            vec[d]++;
        }
    }

    int K;
    cin >> K;

    for (int d = 1; d <= 31; ++d) {
        if (vec[d] > K) {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << 1 << endl;
    return 0;
}