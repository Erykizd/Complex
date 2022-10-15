#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

double a = 0;
double b = 0;
double r = 0;
double fi = 0;

Complex::Complex()
{
    this->a = 0;
    this->b = 0;
    update();
}

Complex::Complex(double a,double b)
{
    this->a = a;
    this->b = b;
    update();
}

Complex::Complex(double a)
{
    this->a = a;
    this->b = 0;
    update();
}

double Complex::getA()
{
    return this->a;
}

double Complex::getB()
{
    return this->b;
}

double Complex::getR()
{
    return this->r;
}

double Complex::getFi()
{
    return this->fi;
}

Complex Complex::operator+(Complex z2)
{
    double a3=this->a+z2.getA();
    double b3=this->b+z2.getB();

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator-(Complex z2)
{
    double a3=this->a-z2.getA();
    double b3=this->b-z2.getB();

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator*(Complex z2)
{
    double a1,b1,a2,b2,a3,b3;

    a1 = this->a;
    b1 = this->b;
    a2 = z2.getA();
    b2 = z2.getB();

    a3=(a1*a2)-(b1*b2);
    b3 = a1*b2 + b1*a2;

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator/(Complex z2)
{
    double r1,fi1,r2,fi2,r3,fi3,a3,b3;

    r1 = this->r;
    fi1 = this->fi;
    r2 = z2.getR();
    fi2 = z2.getFi();

    r3 = r1/r2;
    fi3 = fi1-fi2;

    a3 = r3 * cos(fi3);
    b3 = r3 * sin(fi3);

    Complex z3(a3,b3);

    return z3;
}

void Complex::operator=(Complex z)
{
    this->a = z.getA();
    this->b = z.getB();
    update();
}

Complex Complex::operator+(double d2)
{
    double a3=this->a+d2;
    double b3=this->b;

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator-(double d2)
{
    double a3=this->a-d2;
    double b3=this->b;

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator*(double d2)
{
    double a1,b1,a2,b2,a3,b3;

    a1 = this->a;
    b1 = this->b;
    a2 = d2;
    b2 = 0;

    a3=(a1*a2)-(b1*b2);
    b3 = a1*b2 + b1*a2;

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator/(double d2)
{
    double a1,b1,a3,b3;

    a1 = this->a;
    b1 = this->b;

    a3 = a1/d2;
    b3 = b1/d2;

    Complex z3(a3,b3);

    return z3;
}

Complex Complex::operator^(double p)
{
    double a2,b2;

    a2 = pow(this->r,p) * cos(p * this->fi);
    b2 = pow(this->r,p) * sin(p * this->fi);

    Complex z2(a2,b2);

    return z2;
}

void Complex::operator=(double d)
{
    this->a = d;
    this->b = 0;
    update();
}

Complex::~Complex()
{

}

void Complex::update()
{
    this->r = sqrt(pow(this->a,2)+pow(this->b,2));
    if(this->b >= 0)
    {
        this->fi = acos(this->a/r);
    } else
    {
        this->fi = 2 * M_PI - acos(this->a/r);
    }
}

void Complex::disp()
{
    if (b>=0)
    {
        cout << a << " + " << b << "i" << endl;
    } else
    {
        cout << a << " - " << -b << "i" << endl;
    }
}

