#include <bits/stdc++.h>

using namespace std;

int main() {
    int S;
    cin >> S;

    vector<vector<int>> students(S, vector<int>(6, 0));

    for (int s = 0; s < S; ++s) {
        for (int x = 0; x < 5; ++x) {
            cin >> students[s][x];
        }
    }

    for (int s = 0; s < S; ++s) {
        for (int y = 0; y < S; ++y) {
            for (int x = 0; x < 5; ++x) {
                int student_class = students[s][x];

                if (student_class == students[y][x]) {
                    students[s][5]++;
                    break;
                }
            }
        }
    }

    int temp_class_president;
    int max_classmates = 0;

    for (int s = 0; s < S; ++s) {
        if (students[s][5] > max_classmates) {
            temp_class_president = s;
            max_classmates = students[s][5];
        }
    }

    temp_class_president++;
    cout << temp_class_president << endl;

    return 0;
}