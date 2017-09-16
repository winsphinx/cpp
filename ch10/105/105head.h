#ifndef MY_105_HEAD_H
#define MY_105_HEAD_H

struct customer
{
    char fullname[35];
    double payment;
};

typedef unsigned long ITEM;
/* typedef customer ITEM; */

class List
{
private:
    static const int MAX = 10;
    ITEM items[MAX];
    int count;
public:
    List();
    bool isEmpty() const;
    bool isFull() const;
    bool additem (const ITEM &item);
    void visit (void (*pf) (ITEM &item));
};

#endif
