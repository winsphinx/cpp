#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char FisrtName[20], LastName[10], Grade[2], Age[3];

    cout << "What is your first name? ";
    cin.get (FisrtName, 20).get();
    cout << "What is your last name? ";
    cin.get (LastName, 10).get();
    cout << "What letter grade do you deserve? ";
    cin.get (Grade, 2).get();
    cout << "What is your age? ";
    cin.get (Age, 3).get();

    cout << endl;
    cout << "Name: " << LastName << ", " << FisrtName << endl;
    cout << "Grade: " << char (Grade[0] + 1)  << endl;
    cout << "Age: " << Age << endl;

    return 0;
}
