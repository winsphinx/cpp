#include "91head.h"
#include <iostream>

using namespace std;

int main() {
  rect xy;
  polar p;

  cout << "Enter the x and y: ";

  while (cin >> xy.x >> xy.y) {
    p = rect_to_polar(xy);
    show_polar(p);
    cout << "Next x and y, q to quit: ";
  }

  cout << "Bye!\n";
  return 0;
}
