#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string FisrtName, LastName, Grade, Age;

  cout << "What is your first name? ";
  getline(cin, FisrtName);
  cout << "What is your last name? ";
  getline(cin, LastName);
  cout << "What letter grade do you deserve? ";
  getline(cin, Grade);
  cout << "What is your age? ";
  getline(cin, Age);

  cout << endl;
  cout << "Name: " << LastName << ", " << FisrtName << endl;
  cout << "Grade: " << char(Grade[0] + 1) << endl;
  cout << "Age: " << Age << endl;

  return 0;
}
