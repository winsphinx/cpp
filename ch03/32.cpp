#include <iostream>

int main()
{
    using namespace std;
    int number;

    cout << "Input a number: ___\b\b\b";
    cin >> number;
    cout << number << "(DEC) = ";
    cout << hex;
    cout << number << "(HEX) = ";
    cout << oct;
    cout << number << "(OCT)";
    cout << endl;

    return 0;
}
