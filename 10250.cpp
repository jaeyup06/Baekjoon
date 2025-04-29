#include <iostream>
using namespace std;

int main() {
    int T;

    cin >> T;

    while (T > 0) 	{
        int H, W, N;

        cin >> H >> W >> N;

        int X = (N - 1) % H + 1;
        int Y = (N - 1) / H + 1;

        cout << X * 100 + Y << endl;
        T--;
    }

    return 0;
}