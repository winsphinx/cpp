#ifndef MY_121_HEAD_H
#define MY_121_HEAD_H

class Customer
{
private:
    long arrive;
    int processtime;
public:
    Customer()
    {
        arrive = processtime = 0;
    };
    void set (long when);
    long when() const
    {
        return arrive;
    }
    int ptime() const
    {
        return processtime;
    }
};

typedef Customer Item;

class Queue
{
private:
    struct Node
    {
        Item item;
        struct Node *next;
    };
    const static int QSIZE = 10;
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    Queue (const Queue &q): qsize (0) {}
    Queue &operator= (const Queue &q)
    {
        return *this;
    }
public:
    Queue (int qs = QSIZE);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int queueCount() const;
    bool enqueue (const Item &item);
    bool dequeue (Item &item);
};

#endif
