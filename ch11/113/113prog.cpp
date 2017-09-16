#include "113head.h"

namespace COMPLEX
{
    Complex::Complex()
    {
        r = i = 0;
    }

    Complex::Complex (double x)
    {
        r = x;
        i = 0;
    }
    Complex::Complex (double x, double y)
    {
        r = x;
        i = y;
    }

    Complex::~Complex()
    {
    }

    Complex operator + (Complex &c1, Complex &c2)
    {
        return Complex (c1.r + c2.r, c1.i + c2.i);
    }

    Complex operator - (Complex &c1, Complex &c2)
    {
        return Complex (c1.r - c2.r, c1.i - c2.i);
    }

    Complex operator * (Complex &c1, Complex &c2)
    {
        return Complex ((c1.r * c2.r - c1.i * c2.i), (c1.r * c2.i + c1.i * c2.r));
    }

    Complex operator * (double n, Complex &c)
    {
        return Complex (n * c.r, n * c.i);
    }

    Complex operator * (Complex &c, double n)
    {
        return Complex (n * c.r, n * c.i);
    }

    Complex operator ~ (Complex &c)
    {
        return Complex (c.r, -c.i);
    }

    std::ostream &operator << (std::ostream &os, const Complex &c)
    {
        os << "(" << c.r << ", " << c.i << "i)";
        return os;
    }

    std::istream &operator >> (std::istream &is, Complex &c)
    {
        /* TODO:check input if is a double */
        std::cout << "实数部分: ";
        is >> c.r;
        std::cout << "虚数部分: ";
        is >> c.i;
        return is;
    }

} /* COMPLEX */

