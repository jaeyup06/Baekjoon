#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    for(int i = 0; i < 10; i++) {
        int num;

        cin >> num;

        if(find(vec.begin(), vec.end(), num % 42) == vec.end()) {
            vec.push_back(num%42);
        }
    }
    cout << vec.size();

    return 0;
}