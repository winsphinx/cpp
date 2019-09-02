#include <iostream>

int main() {
  using namespace std;
  char ch;
  cout << "Type, then repeat.\n";

  while ((ch = cin.get()) != '.') {
    if (ch == '\n') {
      cout << ch;
    } else {
      cout << ++ch;
    }
  }

  cout << endl;
  return 0;
}
