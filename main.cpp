#include <iostream>
#include <cmath>
#include <iomanip>
#include "Complex.h"

using namespace std;

Complex i(0,1);

void disp(Complex z);

int main()
{
    cout << fixed << setprecision(4);
    Complex z1(8,4);
    Complex z2(2,0);
    Complex z3;
    z3 = (z1/z2)+i-(i^2);

    cout << "z = ";
    disp(z3);
    cout << "r = " << z3.getR() << endl;
    cout << "fi = " << z3.getFi() << " rad" << endl;
    return 0;
}

void disp(Complex z)
{
    z.disp();
}
