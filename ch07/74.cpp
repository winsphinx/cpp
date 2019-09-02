#include <iostream>
const int LEN = 66;
const int DIV = 6;

void subdivide(char ar[], int low, int high, int level);

int main() {
  int i;
  int min = 0;
  int max = LEN - 2;
  char ruler[LEN];

  for (int i = 1; i < max; i++) {
    ruler[i] = ' ';
  }

  ruler[LEN - 1] = '\0';
  ruler[min] = ruler[max] = '|';
  std::cout << ruler << std::endl;

  for (int i = 1; i < DIV; i++) {
    subdivide(ruler, min, max, i);
    std::cout << ruler << std::endl;

    for (int j = 1; j < max; j++) {
      ruler[j] = ' ';
    }
  }

  return 0;
}

void subdivide(char ar[], int low, int high, int level) {
  if (level == 0) {
    return;
  }

  int mid = (high + low) / 2;
  ar[mid] = '|';
  subdivide(ar, low, mid, level - 1);
  subdivide(ar, mid, high, level - 1);
}
