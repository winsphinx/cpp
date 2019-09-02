#include <iostream>

using namespace std;
const int SIZE = 20;

int main() {
  char name[SIZE];
  cout << "Enter a word: ";
  cin >> name;
  int i = 0;

  while (name[i] != '\0') {
    cout << name[i] << endl;
    ++i;
  }

  return 0;
}
