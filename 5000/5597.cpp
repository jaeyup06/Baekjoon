#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[31] = {0};

    int N;
    for (int i = 0; i < 28; ++i) {
        cin >> N;
        arr[N] = 1;
    }

    for (int i = 1; i <= 30; ++i) {
        if (!arr[i]) {
            cout << i << endl;
        }
    }

    return 0;
}