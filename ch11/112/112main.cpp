#include "112head.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));
  double direction;
  Vector step;
  Vector result(0, 0);
  unsigned long steps = 0;
  double target;
  double dstep;
  ofstream fout;
  fout.open("112.txt");
  cout << "Enter target distance (q to quit): ";

  while (cin >> target) {
    cout << "Enter step length: ";

    if (!(cin >> dstep)) {
      break;
    }

    fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;

    while (result.rval() < target) {
      direction = rand() % 360;
      step.set(dstep, direction, 'p');
      result = result + step;
      fout << ++steps << ":  " << result << endl;
    }

    fout << "After " << steps
         << " steps, the subject has the following location: \n";
    fout << result << endl;
    result.polar_mode();
    fout << " or\n" << result << endl;
    fout << "Average outward distance per step = " << result.rval() / steps
         << endl
         << endl;
    result.set(0, 0);
    steps = 0;
    cout << "Enter target distance (q to quit): ";
  }

  cout << "Bye!\n";

  return 0;
}
