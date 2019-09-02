#include "112head.h"
#include <cmath>

using std::atan2;
using std::cos;
using std::cout;
using std::sin;

namespace VECTOR {
const double PI = 3.1415926;
const double Rad2Deg = 180 / PI;

void Vector::set_r() { r = sqrt(x * x + y * y); }

void Vector::set_a() {
  if (x == 0 && y == 0) {
    a = 0;
  } else {
    a = atan2(y, x);
  }
}

void Vector::set_x() { x = r * cos(a); }

void Vector::set_y() { y = r * sin(a); }

Vector::Vector() {
  x = y = r = a = 0;
  mode = 'r';
}

Vector::Vector(double n1, double n2, char form) {
  mode = form;

  if (form == 'r') {
    x = n1;
    y = n2;
    set_r();
    set_a();
  } else if (form == 'p') {
    r = n1;
    a = n2 / Rad2Deg;
    set_x();
    set_y();
  } else {
    cout << "Incorrect 3rd argument to Vector()--";
    cout << "vector set to 0\n";
    x = y = r = a = 0;
    mode = 'r';
  }
}

void Vector::set(double n1, double n2, char form) {
  mode = form;

  if (form == 'r') {
    x = n1;
    y = n2;
    set_r();
    set_a();
  } else if (form == 'p') {
    r = n1;
    a = n2 / Rad2Deg;
    set_x();
    set_y();
  } else {
    cout << "Incorrect 3rd argument to Vector()--";
    cout << "vector set to 0\n";
    x = y = r = a = 0;
    mode = 'r';
  }
}

Vector::~Vector() {}

void Vector::polar_mode() { mode = 'p'; }

void Vector::rect_mode() { mode = 'r'; }

Vector Vector::operator+(const Vector &b) const {
  return Vector(x + b.x, y + b.y);
}

Vector Vector::operator-(const Vector &b) const {
  return Vector(x - b.x, y - b.y);
}

Vector Vector::operator-() const { return Vector(-x, -y); }

Vector Vector::operator*(double n) const { return Vector(n * x, n * y); }

Vector operator*(double n, const Vector &a) { return a * n; }

std::ostream &operator<<(std::ostream &os, const Vector &v) {
  if (v.mode == 'r') {
    os << "(x, y) = (" << v.x << ", " << v.y << ")";
  } else if (v.mode == 'p') {
    os << "(r, a) = (" << v.r << ", " << v.a << ")";
  } else {
    os << "Vector is invalid";
  }

  return os;
}

} // namespace VECTOR
