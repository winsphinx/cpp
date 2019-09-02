#include "cstdlib"
#include "ctime"
#include "iostream"

void add(double x, double y);
void sub(double x, double y);
void mul(double x, double y);
void div(double x, double y);
void calculate(double x, double y, void (*pf)(double x, double y));

int main() {
  double x, y;
  void (*op[])(double, double) = {add, sub, mul, div};
  std::cout << "Enter two numbers, non-number to quit:" << std::endl;

  while (std::cin >> x >> y) {
    int i = rand() % 4;
    calculate(x, y, op[i]);
  }

  return 0;
}

void add(double x, double y) {
  std::cout << x << " + " << y << " = " << x + y << std::endl;
}

void sub(double x, double y) {
  std::cout << x << " - " << y << " = " << x - y << std::endl;
}

void mul(double x, double y) {
  std::cout << x << " * " << y << " = " << x * y << std::endl;
}

void div(double x, double y) {
  std::cout << x << " / " << y << " = " << x / y << std::endl;
}

void calculate(double x, double y, void (*pf)(double x, double y)) {
  (*pf)(x, y);
}
