#include <iostream>
#include <string>

using namespace std;

struct Car {
  string product;
  int year;
};

int main() {
  cout << "How many cars do you wish to catalog? ";
  int count;
  cin >> count;
  Car *car = new Car[count];

  for (int i = 0; i < count; ++i) {
    cout << "Car #" << i + 1 << endl;
    cout << "Please enter the make: ";
    cin.get();
    /* The above line I don't know why, but it works. */
    getline(cin, car[i].product);
    cout << "Please enter the year made: ";
    cin >> car[i].year;
  }

  for (int i = 0; i < count; ++i) {
    cout << "Here is you collection:\n";
    cout << car[i].year << "\t" << car[i].product << endl;
  }

  delete[] car;

  return 0;
}
