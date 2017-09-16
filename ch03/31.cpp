#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    cout << "bool is " << sizeof (bool) << " bytes." << endl;
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof (short) << " bytes." << endl;
    cout << "long is " << sizeof (long) << " bytes." << endl;
    cout << "float is " << sizeof (float) << " bytes." << endl;
    cout << "double is " << sizeof (double) << " bytes." << endl;
    cout << "long double is " << sizeof (long double) << " bytes." << endl;
    cout << "char is " << sizeof (char) << " bytes." << endl;
    cout << "wchar is " << sizeof (wchar_t) << " bytes." << endl;

    return 0;
}
