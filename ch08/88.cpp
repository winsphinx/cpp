#include <iostream>
#include <cstring>

using namespace std;

template <class T> T maxn (T array[], int n);
template <> char *maxn (char *array[], int n);

int main()
{
    int array1[] = {1, 7, 8, 11, 3, 111, 1111};
    int count1 = sizeof (array1) / sizeof (array1[0]);
    std::cout << maxn (array1, count1) << std::endl;

    double array2[] = {1.9, 7.1, -8, 1.1, 13.89, 1.11, 11.11};
    int count2 = sizeof (array2) / sizeof (array2[0]);
    std::cout << maxn (array2, count2) << std::endl;

    char *array3[] = {"zyx", "abcde", "abcdefg", "a"};
    int count3 = sizeof (array3) / sizeof (array3[0]);
    std::cout << maxn (array3, count3) << std::endl;

    return 0;
}

template <class T> T maxn (T array[], int n)
{
    T max = 0;

    for (int i = 0; i < n; ++i)
    {
        max = (array[i] > max) ? array[i] : max;
    }

    return max;
}

template <> char *maxn (char *array[], int n)
{
    char *longest = array[0];

    for (int i = 1; i < n; ++i)
    {
        longest = (strlen (array[i]) > strlen (longest)) ? array[i] : longest;
    }

    return longest;
}
