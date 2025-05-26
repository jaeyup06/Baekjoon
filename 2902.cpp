#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.length();

    string name(1, S.front());

    for(int i = 1; i < S.length(); i++) {
        if(S[i] == '-') {
            name += S[i + 1];
        }
    }

    cout << name;

    return 0;
}