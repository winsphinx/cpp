#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;
string &Upper(string &str);

int main() {
  string str;

  while (cout << "Enter a string, q to quit: ", getline(cin, str), str != "q") {
    cout << Upper(str) << endl;
  }

  return 0;
}

string &Upper(string &str) {
  for (int i = 0; str[i]; ++i) {
    str[i] = toupper(str[i]);
  }

  return str;
}
