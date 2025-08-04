#include <bits/stdc++.h>

using namespace std;

int main() {
    string cipher;

    int i = 1;
    while (true) {
        string plaintext;
        getline(cin, cipher);

        i++;

        if (cipher != "Was it a cat I saw?") {
            for (int j = 0; j < cipher.length(); j += i) {
                plaintext += cipher[j];
            }

            cout << plaintext << endl;
        } else {
            break;
        }
    }

    return 0;
}