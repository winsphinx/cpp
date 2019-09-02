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

void rect_to_polar(const rect *r, polar *p);
void show_polar(const polar *p);

int main() {
  using namespace std;
  rect r;
  polar p;

  cout << "Enter x and y value: ";

  while (cin >> r.x >> r.y) {
    rect_to_polar(&r, &p);
    show_polar(&p);
    cout << "Next x and y (q to quit.)";
  }

  cout << "Done.\n";
  return 0;
}

void rect_to_polar(const rect *r, polar *p) {
  using namespace std;
  p->distance = sqrt(r->x * r->x + r->y * r->y);
  p->angle = atan2(r->y, r->x);
}

void show_polar(const polar *p) {
  using namespace std;
  const double PI = 3.14159265;
  const double RAD_TO_DEG = 180 / PI;

  cout << "Distance = " << p->distance << ", angle = " << p->angle * RAD_TO_DEG
       << " degrees\n";
}
