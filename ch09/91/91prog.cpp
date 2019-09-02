#include "91head.h"
#include <cmath>
#include <iostream>

polar rect_to_polar(rect xy) {
  using namespace std;
  polar answer;

  answer.distance = sqrt(xy.x * xy.x + xy.y * xy.y);
  answer.angle = atan2(xy.y, xy.x);
  return answer;
}

void show_polar(polar p) {
  using namespace std;
  const double PI = 3.14159265;
  const double RAD_TO_DEG = 180 / PI;

  cout << "Distance = " << p.distance << ", angle = " << p.angle * RAD_TO_DEG
       << " degrees\n";
}
