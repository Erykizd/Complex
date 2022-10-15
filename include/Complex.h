#ifndef Complex_H
#define Complex_H


class Complex
{
    public:
        Complex();
        Complex(double a, double b);
        Complex(double a);
        virtual ~Complex();
        void disp();
        void update();
        double getA();
        double getB();
        double getR();
        double getFi();

        Complex operator+(Complex z2);
        Complex operator+(double d2);
        Complex operator-(Complex z2);
        Complex operator-(double d2);
        Complex operator*(Complex z2);
        Complex operator*(double d2);
        Complex operator^(double p);
        void operator=(Complex z);
        void operator=(double d);

    protected:

    private:
        double a;
        double b;
        double r;
        double fi;
};

#endif // Complex_H
