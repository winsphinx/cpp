#include <iostream>

template <class Any> void Swap(Any &a, Any &b);

int main() {
  using namespace std;
  int i = 10;
  int j = 20;
  cout << "i, j = " << i << ", " << j << "\n";
  cout << "Swap them...\n";
  Swap(i, j);
  cout << "i, j = " << i << ", " << j << "\n";

  double x = 10.1;
  double y = 20.2;
  cout << "x, y = " << x << ", " << y << "\n";
  cout << "Swap them...\n";
  Swap(x, y);
  cout << "x, y = " << x << ", " << y << "\n";

  return 0;
}

template <class Any> void Swap(Any &a, Any &b) {
  Any temp;
  temp = a;
  a = b;
  b = temp;
}
