#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int T;
    cin >> T;

    while(T--) {
        string S;
        int sum = 2015;
        cin >> S;

        for(int i = 0; i < alphabet.size(); i++)
        if (S.find(alphabet[i]) != string::npos) {
            sum -= alphabet[i];
        }

        cout << sum << endl;
    }

    return 0;
}