#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;

    p_updates = &updates;

    cout << "Value of updates = " << updates << endl;
    cout << "Value of *p_updates = " << *p_updates << endl;

    cout << "Address of updates = " << &updates << endl;
    cout << "Address of p_updates = " << p_updates << endl;

    *p_updates = *p_updates++;
    cout << "Now updates = " << updates << endl;

    /* 强制类型转换 */
    int *pt;
    pt = (int *)0xb8000000;

    /* new and delete */
    double *pd = new double;
    *pd = 1.1;
    delete pd;

    /* 动态数组 */
    int *ps = new int [100];
    delete [] ps;

    return 0;
}
