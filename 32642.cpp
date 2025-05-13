#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum = 0, num = 0;

    cin >> N;

    while(N--) {
        long long anger;

        cin >> anger;

        if(anger == 0) sum--;
        else sum++;

        num += sum;
    }

    cout << num;

    return 0;
}