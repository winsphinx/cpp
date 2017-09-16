#include <iostream>
#include <string>
#include <cctype>
#include "105head.h"

void show (ITEM &item);

int main()
{
    using namespace std;
    List l;
    char c;
    ITEM t;

    cout << "Input A to add, S to show, Q to quit.\n";

    while (cin >> c && toupper (c) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }

        switch (c)
        {
            case 'A':
            case 'a':
                if (l.isFull())
                {
                    cout << "list is full.\n";
                }
                else
                {
                    cout << "Enter a number: ";
                    cin >> t;
                    l.additem (t);
                }

                break;

            case 'S':
            case 's':
                if (l.isEmpty())
                {
                    cout << "list is empty.\n";
                }
                else
                {
                    l.visit (show);
                }

                break;
        }

        cout << "Input A to add, S to show, Q to quit.\n";
    }

    cout << "Done!\n";

    return 0;
}

void show (ITEM &item)
{
    using namespace std;
    cout << item << endl;
}
