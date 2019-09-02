#include "104head.h"
#include <cctype>
#include <iostream>
#include <string>

void GetItem(ITEM &t);
int main() {
  using namespace std;
  Stack s;
  char c;
  ITEM t;
  double total = 0.0;

  cout << "Input A to add, P to pop, Q to quit: ";

  while (cin >> c && toupper(c) != 'Q') {
    while (cin.get() != '\n') {
      continue;
    }

    switch (c) {
    case 'A':
    case 'a':
      if (s.isFull()) {
        cout << "stack is full.\n";
      } else {
        GetItem(t);
        s.push(t);
      }

      break;

    case 'P':
    case 'p':
      if (s.isEmpty()) {
        cout << "stack is empty.\n";
      } else {
        s.pop(t);
        total += t.payment;
        cout << "Now payment of " << t.fullname << " is: " << t.payment << endl;
        cout << "Total payment are: " << total << endl;
      }

      break;
    }

    cout << "Input A to add, P to pop, Q to quit: ";
  }

  cout << "Done!\n";

  return 0;
}

void GetItem(ITEM &t) {
  using namespace std;
  cout << "Enter name: ";
  cin.getline(t.fullname, 34);
  cout << "Enter payment: ";
  cin >> t.payment;
}
