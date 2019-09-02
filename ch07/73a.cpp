#include <cmath>
#include <iostream>

struct polar {
  double distance;
  double angle;
};

struct rect {
  double x;
  double y;
};

polar rect_to_polar(rect r);
void show_polar(polar p);

int main() {
  using namespace std;
  rect r;
  polar p;

  cout << "Enter x and y value: ";

  while (cin >> r.x >> r.y) {
    p = rect_to_polar(r);
    show_polar(p);
    cout << "Next x and y (q to quit.)";
  }

  cout << "Done.\n";
  return 0;
}

polar rect_to_polar(rect r) {
  using namespace std;
  polar answer;

  answer.distance = sqrt(r.x * r.x + r.y * r.y);
  answer.angle = atan2(r.y, r.x);
  return answer;
}

void show_polar(polar p) {
  using namespace std;
  const double PI = 3.14159265;
  const double RAD_TO_DEG = 180 / PI;

  cout << "Distance = " << p.distance << ", angle = " << p.angle * RAD_TO_DEG
       << " degrees\n";
}
