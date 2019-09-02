#include <cmath>
#include <iostream>

int main() {
  using namespace std;

  double area;
  cout << "Input a number: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "Square root is " << side << "." << endl;

  return 0;
}
