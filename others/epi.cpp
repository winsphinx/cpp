#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main (int argc, char *argv[])
{
    srand ((unsigned)time (NULL));
    const int count = 30000;
    long double x = 0;
    long double y = 0;
    long double r = 0;

    cout.precision (9);

    for (int i = 1; i <= count; ++i)
    {
        x = ((long double)rand()) / RAND_MAX;
        y = ((long double)rand()) / RAND_MAX;

        cout << i << ": (" << x << ", " << y << ")       \r";

        if (sqrt (x * x + y * y) < 1.0)
        {
            r++;
        }
    }

    cout << endl << 4 * r / count  << endl;

    return 0;
}
