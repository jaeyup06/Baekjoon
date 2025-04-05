#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    int c, d, f;

    f = b / 100;
    d = b - (f * 100);
    d /= 10;
    c = b - (f * 100) - (d * 10);

    cout << a * c << endl;
    cout << a * d << endl;
    cout << a * f << endl;
    cout << a * b << endl;

    return 0;
}