#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while(N--) {
        int total_score = 0, last_score = 1;
        string OX;
        cin >> OX;

        for(int i = 0; i < OX.length(); i++) {
            if(OX[i] == 'O') {
                total_score += last_score;
                last_score++;
            }
            else {
                last_score = 1;
            }
        }

        cout << total_score << endl;
    }

    return 0;
}