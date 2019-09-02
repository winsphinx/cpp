#include <iostream>

inline void swapr(int &a, int &b);
inline void swapp(int *a, int *b);
inline void swapv(int a, int b);

int main() {
  using namespace std;
  int w1 = 666;
  int w2 = 888;

  cout << "a, b = " << w1 << ", " << w2 << endl;
  swapr(w1, w2);
  /* swapp(&w1, &w2); */
  /* swapv(w1, w2); */
  cout << "a, b = " << w1 << ", " << w2 << endl;

  return 0;
}

inline void swapr(int &a, int &b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

inline void swapp(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

inline void swapv(int a, int b) {
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}
