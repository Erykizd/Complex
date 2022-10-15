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
    Complex z1(1,1);
    Complex z2(1,6);
    Complex z3;
    z3 = i^2.25;

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
