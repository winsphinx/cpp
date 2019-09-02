#ifndef MY_104_HEAD_H
#define MY_104_HEAD_H

struct customer {
  char fullname[35];
  double payment;
};

/* typedef unsigned long ITEM; */
typedef customer ITEM;

class Stack {
private:
  static const int MAX = 10;
  ITEM items[MAX];
  int top;

public:
  Stack();
  bool isEmpty() const;
  bool isFull() const;
  bool push(const ITEM &item);
  bool pop(ITEM &item);
};

#endif
