#ifndef MY_111_HEAD_H
#define MY_111_HEAD_H
#include <iostream>

class Time {
public:
  Time();
  ~Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h = 0, int m = 0);
  /* 第一次用sum() */
  /* Time Sum (const Time & t) const; */
  /* 现在重载+ */
  Time operator+(const Time &t) const;
  Time operator*(double n) const;
  void Show() const;

  /* 用友元函数重载 */
  friend Time operator*(double m, const Time &t) { return t * m; }
  friend std::ostream &operator<<(std::ostream &os, const Time &t);

private:
  int hours;
  int minutes;
};

#endif
