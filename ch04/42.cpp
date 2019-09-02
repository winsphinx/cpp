#include <cstring>
#include <iostream>
#include <string>

using namespace std;
struct inf {
  /* char name[20]; */
  string name;
  float vol;
  double price;
};

int main() {
  inf name1 = {"KK", 1.8, 3.6};
  inf name2 = {"zz", 2.232, 1.23};

  cout << name1.name << endl;

  return 0;
}
