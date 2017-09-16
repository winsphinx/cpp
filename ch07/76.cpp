#include <iostream>

const int MAX = 10;

int array_input (double ar[]);
void array_show (const double ar[], int n);
double array_average (const double ar[], int n);

int main()
{
    using namespace std;
    double ar[MAX];
    int n = array_input (ar);
    array_show (ar, n);
    cout << "Average of the above array is: " << array_average (ar, n) << endl;

    return 0;
}

int array_input (double ar[])
{
    using namespace std;
    double tmp;
    int i;

    for (i = 0; i < MAX; ++i)
    {
        if (cout << "Value " << i + 1 << ": ", cin >> tmp)
            ar[i] = tmp;
        else
        {
            return i;
        }
    }
}

void array_show (const double ar[], int n)
{
    using namespace std;
    cout << "The array is: {" << ar[0];

    for (int i = 1; i < n; ++i)
    {
        cout << ", " << ar[i];
    }

    cout << "}" << endl;
}

double array_average (const double ar[], int n)
{
    using namespace std;
    double total = 0;

    for (int i = 0; i < n; ++i)
    {
        total += ar[i];
    }

    return total / n;
}
