#include "121head.h"
#include <cstdlib>

Queue::Queue (int qs): qsize (qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue()
{
    Node *temp;

    while (front)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isEmpty() const
{
    return items == 0;
}

bool Queue::isFull() const
{
    return items == qsize;
}

int Queue::queueCount() const
{
    return items;
}

bool Queue::enqueue (const Item &item)
{
    if (isFull())
    {
        return false;
    }

    Node *add = new Node;

    if (add == NULL)
    {
        return false;
    }

    add->item = item;
    add->next = NULL;
    items++;

    if (front == NULL)
    {
        front = add;
    }
    else
    {
        rear->next = add;
    }

    rear = add;
    return true;
}

bool Queue::dequeue (Item &item)
{
    if (front == NULL)
    {
        return false;
    }

    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;

    if (items == 0)
    {
        rear = NULL;
    }

    return true;
}

void Customer::set (long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
