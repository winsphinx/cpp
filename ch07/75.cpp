#include <iostream>

double average(double x, double y);

int main() {
  using namespace std;
  double x, y;

  while (cout << "输入两个数字(0 或字母退出): ", cin >> x >> y, x * y != 0) {
    cout << "调和平均数为: " << average(x, y) << endl;
  }

  return 0;
}

double average(double x, double y) {
  using namespace std;

  return 2.0 * x * y / (x + y);
}
