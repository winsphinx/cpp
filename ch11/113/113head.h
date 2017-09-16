#ifndef MY_113_HEAD_H
#define MY_113_HEAD_H
#include <iostream>

namespace COMPLEX
{
    class Complex
    {
    public:
        Complex();
        Complex (double);
        Complex (double, double);
        ~Complex();

        friend Complex operator + (Complex &, Complex &);
        friend Complex operator - (Complex &, Complex &);
        friend Complex operator * (Complex &, Complex &);
        friend Complex operator * (double, Complex &);
        friend Complex operator * (Complex &, double);
        friend Complex operator ~ (Complex &);

        friend std::ostream &operator << (std::ostream &, const Complex &);
        friend std::istream &operator >> (std::istream &is, Complex &c);

    private:
        double r;
        double i;
    };

} /* COMPLEX */

#endif
