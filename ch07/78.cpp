#include <iostream>

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);
double calculate(double x, double y, double (*pf)(double x, double y));

int main() {
  double x, y;
  double (*op[])(double, double) = {add, sub, mul, div};
  std::cout << "Enter two numbers, non-number to quit:" << std::endl;

  while (std::cin >> x >> y) {
    for (int i = 0; i < 4; ++i) {
      std::cout << calculate(x, y, op[i]) << std::endl;
    }
  }

  return 0;
}

double add(double x, double y) { return x + y; }

double sub(double x, double y) { return x - y; }

double mul(double x, double y) { return x * y; }

double div(double x, double y) {
  /* if (y) */
  /* { */
  return x / y;
  /* } */
  /* else */
  /* { */
  /* std::cout << "Div 0!" << std::endl; */
  /* return 0; */
  /* } */
}

double calculate(double x, double y, double (*pf)(double x, double y)) {
  return (*pf)(x, y);
}
