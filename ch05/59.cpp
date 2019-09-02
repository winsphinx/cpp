#include <iostream>

int main() {
  int count;
  std::cout << "Enter number of rows: ";
  std::cin >> count;

  for (int row = 1; row <= count; ++row) {
    for (int col = 1; col <= count - row; ++col) {
      std::cout << ".";
    }

    for (int col = count - row + 1; col <= count; ++col) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  return 0;
}
