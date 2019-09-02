#include <iostream>

struct _time {
  int hr;
  int min;
};

const int MIN_PER_HOUR = 60;

_time sum(_time t1, _time t2);
void show_time(_time t);

int main() {
  using namespace std;
  _time time1 = {5, 45};
  _time time2 = {4, 55};
  _time total = sum(time1, time2);
  cout << "Two time total: ";
  show_time(total);

  _time time3 = {4, 30};
  cout << "Three total: ";
  show_time(sum(total, time3));

  return 0;
}

_time sum(_time t1, _time t2) {
  _time total;
  total.min = (t1.min + t2.min) % MIN_PER_HOUR;
  total.hr = t1.hr + t2.hr + (t1.min + t2.min) / MIN_PER_HOUR;
  return total;
}

void show_time(_time t) {
  using namespace std;
  cout << t.hr << " hours. " << t.min << " minutes.\n";
}
