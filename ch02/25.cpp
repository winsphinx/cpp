#include <iostream>

using namespace std;

void fuck(int);

int main() {
  /* using namespace std; */
  cout << "Input a number: ";
  int counts;
  cin >> counts;
  fuck(counts);

  return 0;
}

void fuck(int n) {
  /* using namespace std; */
  cout << "Fuck " << n << " times." << endl;
}
