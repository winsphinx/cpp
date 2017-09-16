#ifndef MY_112_HEAD_H
#define MY_112_HEAD_H
#include <iostream>

namespace VECTOR
{
    class Vector
    {
    public:
        Vector();
        Vector (double, double, char form = 'r');
        void set (double, double, char form = 'r');
        ~Vector();
        double xval() const
        {
            return x;
        }
        double yval() const
        {
            return y;
        }
        double rval() const
        {
            return r;
        }
        double aval() const
        {
            return a;
        }
        void polar_mode();
        void rect_mode();
        Vector operator + (const Vector &) const;
        Vector operator - (const Vector &) const;
        Vector operator - () const;
        Vector operator * (double) const;

        friend Vector operator * (double, const Vector &);
        friend std::ostream &operator << (std::ostream &, const Vector &);

    private:
        double x;
        double y;
        double r;
        double a;
        char mode;  // 'r' = 直角坐标, 'p' = 极坐标

        void set_r();
        void set_a();
        void set_x();
        void set_y();
    };
} /* VECTOR */

#endif
