#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "Enter the delay time, in sec: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "Starting\a\n";
    /* something strange that 'starting' does not show right now. Why? */
    clock_t start = clock();

    while (clock() - start < delay)
        ;

    cout << "Done!\a\n";

    return 0;
}

