#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;

    cout << "x = ";
    cin >> x;

    A = 1 + x;

    if (x <= 4)
        B = exp(log(2 + 2 * x) + 2 * x);
    if (x > 4 && x <= 7)
        B = (1.0 / tan((1 + x) / 9.0)) + 8 * x;  // ctg((1+x)/9) + 8x
    if (x > 7)
        B = 1 - 7 * x + x * x - 2 * pow(x, 3);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    if (x <= 4)
        B = exp(log(2 + 2 * x) + 2 * x);
    else if (x > 4 && x <= 7)
        B = (1.0 / tan((1 + x) / 9.0)) + 8 * x;  // ctg((1+x)/9) + 8x
    else
        B = 1 - 7 * x + x * x - 2 * pow(x, 3);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
