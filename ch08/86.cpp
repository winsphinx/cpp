#include <cstring>
#include <iostream>

using namespace std;

struct op {
  string str;
  int count;
};

op &repeat(op &str, int n = 0);

int main() {
  op MyString = {"This is a test string.", 0};

  repeat(MyString);
  repeat(MyString, 2);
  repeat(MyString, 1);
  repeat(MyString, 1000);

  return 0;
}

op &repeat(op &str, int n) {
  if (n == 0) {
    std::cout << str.str << std::endl;
  } else {
    for (int i = 0; i < str.count; ++i) {
      std::cout << str.str << std::endl;
    }
  }

  str.count++;
  return str;
}
