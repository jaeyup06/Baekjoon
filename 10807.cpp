#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int N, v;

    cin >> N;

    while(N--) {
        int num;

        cin >> num;

        vec.push_back(num);
    }

    cin >> v;

    cout << count(vec.begin(), vec.end(), v);

    return 0;
}