#include "104head.h"

Stack::Stack() { top = 0; }

bool Stack::isEmpty() const { return top == 0; }

bool Stack::isFull() const { return top == MAX; }

bool Stack::push(const ITEM &item) {
  if (top < MAX) {
    items[top++] = item;
    return true;
  } else {
    return false;
  }
}

bool Stack::pop(ITEM &item) {
  if (top > 0) {
    item = items[--top];
    return true;
  } else {
    return false;
  }
}
