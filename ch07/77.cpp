#include <iostream>

long double f(int x);

int main() {
  using namespace std;
  long double x;
  cout << "Input a number (>=0), other input to quit." << endl;

  while (cin >> x && x >= 0) {
    cout << x << "! = " << f(x) << endl;
  }

  return 0;
}

long double f(int x) {
  if (x > 0) {
    return f(x - 1) * x;
  } else {
    return 1;
  }
}
