#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> DNAs(N);
    for (int i = 0; i < N; ++i) {
        string DNA;
        cin >> DNA;
        DNAs[i] = DNA;
    }

    string min_DNA;
    int min_Hamming_Distance = 0;

    for (int col = 0; col < M; ++col) {
        map<char, int> nucleotide = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

        for (int comparison_row = 0; comparison_row < N; ++comparison_row) {
            nucleotide[DNAs[comparison_row][col]]++;
        }

        int min_nucleotide = 0;

        char min_char = 'A';
        int max_count = nucleotide['A'];

        for (char base : {'A', 'C', 'G', 'T'}) {
            if ((nucleotide[base] > max_count) ||
                (nucleotide[base] == max_count) && (base < min_char)) {
                min_char = base;
                max_count = nucleotide[base];
            }
        }

        min_Hamming_Distance += (N - max_count);
        min_DNA += min_char;
    }

    cout << min_DNA << "\n";
    cout << min_Hamming_Distance << "\n";

    return 0;
}