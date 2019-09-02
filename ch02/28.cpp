#include <iostream>

int main() {
  using namespace std;

  double degree;

  cout << "摄氏度：";
  cin >> degree;
  cout << degree << " 摄氏度 = " << degree * 1.8 + 32.0 << " 华氏度" << endl;

  return 0;
}
