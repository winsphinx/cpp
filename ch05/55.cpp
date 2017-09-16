#include <iostream>

int main()
{
    std::cout << "Input a min number: ";
    int min;
    std::cin >> min;

    std::cout << "Input a max number: ";
    int max;
    std::cin >> max;

    int sum;

    for (int i = min; i <= max; ++i)
    {
        sum += i;
    }

    std::cout << "Sum [" << min << ", " << max << "] is " << sum << std::endl;

    return 0;
}
