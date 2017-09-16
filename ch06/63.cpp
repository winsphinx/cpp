#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
int main()
{
    cout << "Input any characters and digtals, '@' to stop.\n";
    int j = 0;
    char ch, word[100];

    while ((ch = cin.get()) != '@')
    {
        word[j] = ch;
        word[j + 1] = '\0';
        ++j;
    }

    for (int i = 0; i < strlen (word) + 1; ++i)
    {
        if (isdigit (word[i]))
        {
            cout << '-';
        }
        else if (islower (word[i]))
        {
            cout << char (word[i] + 'A' - 'a');
        }
        else if (isupper (word[i]))
        {
            cout << char (word[i] - 'A' + 'a');
        }
        else
        {
            cout << word[i];
        }
    }

    cout << endl;
    return 0;
}
