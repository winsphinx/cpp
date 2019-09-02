#include <iostream>

const double Danli = 0.10;
const double Fuli = 0.05;
const double Yuanshi = 100;

int main() {
  int year = 0;
  double sum0 = Yuanshi;
  double sum1 = Yuanshi;

  do {
    sum0 = Yuanshi * (1 + Danli * year);
    sum1 *= (1 + Fuli);
    ++year;
  } while (sum0 > sum1);

  std::cout << "在第" << year << "年，复利大于单利，各自价值为" << sum0 << ", "
            << sum1 << std::endl;

  return 0;
}
