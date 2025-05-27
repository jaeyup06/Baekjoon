#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<double> score(N);

    double sum = 0;
    double average;
    double max_score;

    for (int i = 0; i < N; ++i) {
        cin >> score[i];
    }

    max_score = *max_element(score.begin(), score.end());

    for (int i = 0; i < N; ++i) {
        score[i] = score[i] / max_score * 100;
        sum += score[i];
    }

    average = sum / N;

    cout << (average * 100 + 0.5) / 100.0 << endl;

    return 0;
}