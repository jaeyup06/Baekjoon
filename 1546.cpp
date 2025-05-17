#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    double sum = 0, average, M;
    cin >> N;

    vector<double> score(N);

    for (int i = 0; i < N; ++i) {
        cin >> score[i];
    }

    M = *max_element(score.begin(), score.end());

    for (int i = 0; i < N; ++i) {
        score[i] = score[i] / M * 100;
        sum += score[i];
    }

    average = sum / N;

    cout << (average * 100 + 0.5) / 100.0;

    return 0;
}