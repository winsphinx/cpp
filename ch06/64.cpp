#include <iostream>

const int MAX = 10;
int main() {
  using namespace std;
  double total, average, num[MAX];
  int i = 0;
  cout << "Input MAX 10 numbers, non-digits to end\n";

  while (i < MAX && cin >> num[i]) {
    ++i;
  }

  for (int j = 0; j < i; j++) {
    total += num[j];
  }

  average = total / i;
  cout << "The average is: " << average << endl;
  cout << "These numbers are great then average: ";

  for (int j = 0; j < i; j++) {
    if (num[j] > average) {
      cout << num[j] << ", ";
    }
  }

  cout << endl;

  return 0;
}
