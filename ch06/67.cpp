#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

struct Patron
{
    string Name;
    double Money;
};

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open ("67.in");
    fout.open ("67.out");

    if (!fin.is_open())
    {
        cout << "Cannot open file.\n";
        exit (EXIT_FAILURE);
    }

    int count;
    fin >> count;
    Patron *patrons = new Patron [count];

    for (int i = 0; i < count && fin.good(); ++i)
    {
        fin.get();
        /* getline(fin, (patrons + i)->Name); */
        /* fin >> (patrons + i)->Money; */
        getline (fin, (patrons + i)->Name);
        fin >> (patrons + i)->Money;
    }


    fout << "Grand Patrons:" << endl;
    int j = 0;

    for (int i = 0; i < count; ++i)
    {
        if ((patrons + i)->Money > 10000)
        {
            fout << "Name: " << (patrons + i)->Name << endl;
            fout << "Money: " << (patrons + i)->Money << endl;
            ++j;
        }
    }

    if (j == 0)
    {
        fout << "NONE!" << endl;
    }

    fout << "\nOther Patrons:" << endl;
    j = 0;

    for (int i = 0; i < count; ++i)
    {
        if ((patrons + i)->Money < 10000)
        {
            fout << "Name: " << (patrons + i)->Name << endl;
            fout << "Money: " << (patrons + i)->Money << endl;
            ++j;
        }
    }

    if (j == 0)
    {
        fout << "NONE!" << endl;
    }

    delete [] patrons;
    fin.close();
    fout.close();
    return 0;
}
