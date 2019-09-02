#include <cstring>
#include <iostream>
#include <string>

using namespace std;

void strcount(const string &str);

int main() {
  string InputStr;

  while (cout << "Input a string, empty line to quit:\n",
         getline(cin, InputStr), InputStr != "") {
    strcount(InputStr);
  }

  return 0;
}

void strcount(const string &str) {
  static int total = 0;
  int count = 0;
  cout << "\"" << str << "\" contains ";

  for (int i = 0; i < str.size() && str[i]; i++) {
    count++;
  }

  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
