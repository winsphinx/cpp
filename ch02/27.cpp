#include <iostream>

int main() {
  using namespace std;

  double light_year;

  cout << "输入光年：";
  cin >> light_year;
  cout << light_year << " 光年 = " << light_year * 63240 << " 天文单位" << endl;

  return 0;
}
