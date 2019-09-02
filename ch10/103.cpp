#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  static const int LIMIT = 25;
  string fname;
  char lname[LIMIT];

public:
  Person();
  Person(const string &in, const char *fn = "XXXX");
  /* ~Person (); */
  void Show() const;
  void FormShow() const;
};

Person::Person() {
  cout << "blabla" << endl;
  lname[0] = '\0';
  fname = "";
}

Person::Person(const string &in, const char *fn) {
  fname = in;
  strncpy(lname, fn, LIMIT - 1);
  lname[LIMIT] = '\0';
}

void Person::Show() const { cout << fname << " " << lname << endl; }

void Person::FormShow() const { cout << lname << ", " << fname << endl; }

int main() {
  Person p0 = Person();
  p0.Show();
  p0.FormShow();

  Person p1 = Person("AAA");
  p1.Show();
  p1.FormShow();

  Person p2 = Person("BBB", "CCC");
  p2.Show();
  p2.FormShow();

  return 0;
}
