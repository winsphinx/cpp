#include "111head.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding (2, 40);
    Time fixing (5, 55);

    cout << "Planning time = ";
    planning.Show();
    cout << endl;
    /* cout << "Coding time = " << coding.Show() << endl; */
    /* cout << "Fixing time = " << fixing.Show() << endl; */

    Time total;
    cout << "Total time = ";
    total = planning + coding + fixing;
    total.Show();
    cout << endl;

    Time multi1, multi2;
    cout << "Multi time = ";
    multi1 = coding * 2.5;
    multi1.Show();
    multi2 = 2.5 * coding;
    multi2.Show();
    cout << endl;

    cout << "Multi time1 = " << multi1 << endl;
    cout << "Multi time2 = " << multi2 << endl;

    return 0;
}
