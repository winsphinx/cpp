#include "105head.h"

List::List()
{
    count = 0;
}

bool List::isEmpty() const
{
    return count == 0;
}

bool List::isFull() const
{
    return count == MAX;
}

bool List::additem (const ITEM &item)
{
    if (count == MAX)
    {
        return false;
    }
    else
    {
        items[count++] = item;
    }

    return true;
}

void List::visit (void (*pf) (ITEM &item))
{
    for (int i = 0; i < count; ++i)
    {
        (*pf) (items[i]);
    }
}


