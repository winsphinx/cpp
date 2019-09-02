#include <iostream>

int main() {
  using namespace std;

  const int DAY2HOURS = 24;
  const int HOUR2MIN = 60;
  const int MIN2SEC = 60;

  long number;
  int n_days, n_minutes, n_seconds;

  cout << "Enter a number of seconds: ";
  cin >> number;
  n_seconds = int(number) % MIN2SEC;
  n_minutes = int(number / MIN2SEC) % MIN2SEC;
  n_days = int(number / MIN2SEC / HOUR2MIN / DAY2HOURS);

  cout << number << " seconds = " << n_days << " days, " << n_minutes
       << " minutes and " << n_seconds << " seconds.\n";

  return 0;
}
