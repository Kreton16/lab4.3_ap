#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, F, a, b, c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(6) << "x" << setw(6) << "|"
        << setw(6) << "F" << setw(6) << "|" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x < 3 && b != 0)
            F = a * pow(x, 2) - b * x + c;
        else
            if (x > 3 && b == 0)
                F = (x - a) / (x - c);
            else
                F = x / c;
        cout << "|" << setw(6) << setprecision(2) << x
            << setw(6) << "|" << setw(6) << setprecision(3)
            << F << setw(6) << "|" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}