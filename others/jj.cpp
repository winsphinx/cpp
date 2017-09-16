#include "iostream"

int main (int argc, char *argv[])
{
    using namespace std;
    cout << "对于任一个自然数，如果是偶数，则除2，如果是奇数，则乘3加1，最终必然为1。\n";
    /* TODO: to deal with large number */
    long int n;

    while (cout << "Enter a interger number, 0 to quit: ", cin >> n, n != 0)
    {
        cout << n;

        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                cout << " -> " << n;
            }
            else if (n % 2 == 1)
            {
                n = n * 3 + 1;
                cout << " -> " << n;
            }
        }

        cout << endl;
    }

    return 0;
}
