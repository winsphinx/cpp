#include <iostream>

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <class Any> void Swap (Any &a, Any &b);
template <> void Swap<job> (job &j1, job &j2);

void show (job &j);

int main()
{
    using namespace std;
    cout.precision (2);
    cout.setf (ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int Swapper: " << endl;
    Swap (i, j);
    cout << "i, j = " << i << ", " << j << endl;

    job sue = {"Susan", 73000.5, 7};
    job sin = {"Sidney", 78910, 9};
    cout << "Before Swap:" << endl;
    show (sue);
    show (sin);
    Swap (sue, sin);
    cout << "After Swap:" << endl;
    show (sue);
    show (sin);

    return 0;
}

template <class Any> void Swap (Any &a, Any &b)
{
    Any tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <> void Swap<job> (job &j1, job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void show (job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}
