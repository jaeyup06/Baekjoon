#include <iostream>
using namespace std;

int main() {
    int people, yes = 0, no = 0;

    cin >> people;

    for (int comments; 0 < people; people--)
	{
        cin >> comments;

        if (comments == 1)
            yes++;
        else
            no++;
    }

    if (yes > no)
        cout << "Junhee is cute!" << endl;
    else
        cout << "Junhee is not cute!" << endl;

    return 0;
}