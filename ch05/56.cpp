#include <iostream>

int main() {
  using namespace std;

  int num, sum = 0;

  /* do */
  /* { */
  /*     cout << "Input a number: "; */
  /*     cin >> num; */
  /*     sum += num; */
  /*     cout << "Sum is: " << sum << endl; */
  /* } */
  /* while(num); */

  /* 上面的会多重复一行不是立即退出，下面的用两次cout重复，待修改 */
  /* cout << "Input a number: "; */
  /* cin >> num; */
  /* while(num) */
  /* { */
  /* sum += num; */
  /* cout << "Sum is: " << sum << endl; */
  /* cout << "Input a number: "; */
  /* cin >> num; */
  /* } */

  /* 下面的这个，thanks to smth */
  while (cout << "Input a number: ", cin >> num, num) {
    sum += num;
    cout << "Sum is: " << sum << endl;
  };

  return 0;
}
