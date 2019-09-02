#ifndef MY_91_HEAD_H
#define MY_91_HEAD_H

struct polar {
  double distance;
  double angle;
};

struct rect {
  double x;
  double y;
};

polar rect_to_polar(rect xy);
void show_polar(polar p);

#endif
