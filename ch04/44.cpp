#include <iostream>

struct ini
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    ini *ps = new ini;

    cout << "enter name: ";
    cin.get (ps->name, 20);
    cout << "enter volume: ";
    cin >> (*ps).volume;
    cout << (*ps).name << endl;
    cout << ps->volume << endl;
    return 0;
}
