#include <iostream>
#include <string>

using namespace std;

struct Patron
{
    string Name;
    double Money;
};

int main()
{
    cout << "Input how many patrons: ";
    int count;
    cin >> count;
    Patron *patrons = new Patron [count];

    for (int i = 0; i < count; ++i)
    {
        cout << "Name: ";
        cin.get();
        getline (cin, patrons[i].Name);
        cout << "Money: ";
        cin >> patrons[i].Money;
    }

    cout << "Grand Patrons:" << endl;
    int j = 0;

    for (int i = 0; i < count; ++i)
    {
        if (patrons[i].Money > 10000)
        {
            cout << "Name: " << patrons[i].Name << endl;
            cout << "Money: " << patrons[i].Money << endl;
            ++j;
        }
    }

    if (j == 0)
    {
        cout << "NONE!" << endl;
    }

    cout << "\nOther Patrons:" << endl;
    j = 0;

    for (int i = 0; i < count; ++i)
    {
        if (patrons[i].Money < 10000)
        {
            cout << "Name: " << patrons[i].Name << endl;
            cout << "Money: " << patrons[i].Money << endl;
            ++j;
        }
    }

    if (j == 0)
    {
        cout << "NONE!" << endl;
    }

    delete [] patrons;
    return 0;
}
