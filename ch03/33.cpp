#include <iostream>

int main() {
  using namespace std;

  double n_degree, n_minute, n_second;

  cout << "Enter a latitude in degrees, minutes and seconds.\n";
  cout << "First, enter the degrees: ";
  cin >> n_degree;
  cout << "Next, the minutes: ";
  cin >> n_minute;
  cout << "Last, the seconds: ";
  cin >> n_second;

  cout << n_degree << " degrees, " << n_minute << " minutes," << n_second
       << " seconds = " << n_degree + n_minute / 60 + n_second / 3600
       << " degrees.\n";

  return 0;
}
