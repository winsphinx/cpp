#include <iostream>

const int Size = 80;
char *left(const char *str, int n = 1);
unsigned long left(unsigned long num, unsigned ct = 1);

int main() {
  using namespace std;
  char sample[Size];
  cout << "Enter a string: \n";
  cin.get(sample, Size);
  char *ps = left(sample, 4);
  cout << ps << endl;
  delete[] ps;
  ps = left(sample);
  cout << ps << endl;
  delete[] ps;

  unsigned long n;
  cout << "Enter a num: \n";
  cin >> n;
  cout << left(n, 4) << endl;
  cout << left(n) << endl;

  return 0;
}

char *left(const char *str, int n) {
  if (n < 0) {
    n = 0;
  }

  char *p = new char[n + 1];
  int i;

  for (i = 0; i < n && str[i]; ++i) {
    p[i] = str[i];
  }

  while (i <= n) {
    p[i++] = '\0';
  }

  return p;
}

unsigned long left(unsigned long num, unsigned ct) {
  unsigned digits = 1;
  unsigned long n = num;

  if (ct == 0 || num == 0) {
    return 0;
  }

  while (n /= 10) {
    digits++;
  }

  if (digits > ct) {
    ct = digits - ct;

    while (ct--) {
      num /= 10;
    }

    return num;
  } else {
    return num;
  }
}
