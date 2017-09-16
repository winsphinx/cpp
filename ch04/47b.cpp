#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Pizza
{
    string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza *pizza = new Pizza;

    cout << "Input company: ";
    getline (cin, pizza->company);
    cout << "Input diameter: ";
    cin >> pizza->diameter;
    cout << "Input weight: ";
    cin >> pizza->weight;

    cout << pizza->company << endl;
    cout << pizza->diameter << endl;
    cout << pizza->weight << endl;

    delete pizza;

    return 0;
}
