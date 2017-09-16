#include "iostream"
#include "cstdlib"
#include "ctime"
#include "cmath"
#include "string"

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool isint (string s);
bool addint (int x, int y);
bool subint (int x, int y);
bool mulint (int x, int y);
bool divint (int x, int y);
bool calculate (int x, int y, bool (*pf) (int x, int y));
int randint (int min, int max);


int main (int argc, char **argv)
{
    int m, n, o, x, y, ok = 0;
    bool (*op[]) (int, int) = {addint, subint, mulint, divint};
    srand ((int) time (0));

    switch (argc)
    {
        case 3:
            if (isint (argv[1]) && isint (argv[2]))
            {
                m = atoi (argv[1]);
                n = atoi (argv[2]);
                cout << "最大位数为" << m << "位" << endl;
                cout << "答题次数为" << n << "次" << endl;
            }
            else
            {
                cout << "Err" << endl;
                return 1;
            }

            break;

        case 1:
            cout << "输入最大位数：";
            cin >> m;
            cout << "输入答题次数：";
            cin >> n;
            break;

        default:
            cout << "格式：" << endl;
            cout << "\tmm 最大位数 答题次数" << endl;
            cout << "或直接输入：" << endl;
            cout << "\tmm" << endl;
            cout << "再根据提示输入参数" << endl;
            return 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << "第" << i << "题：  ";
        x = randint (1, pow (10, m) - 1);
        y = randint (1, pow (10, m) - 1);
        o = rand() % 4;

        if (calculate (x, y, op[o]))
        {
            cout << "正确！" << endl;
            ok++;
        }
        else
        {
            cout << "错误！" << endl;
            /* todo: error expression */
        }
    }

    cout << endl << "答对" << ok << "题。" << endl;
    cout << "正确率" << 100 * ok / n << "%。" << endl;
    return 0;
}

bool addint (int x, int y)
{
    cout << x << " + " << y << " = ";
    int z;
    cin >> z;
    return x + y == z;
}

bool subint (int x, int y)
{
    if (x < y)
    {
        int t;
        t = x;
        x = y;
        y = t;
    }

    cout << x << " - " << y << " = ";
    int z;
    cin >> z;
    return x - y == z;
}

bool mulint (int x, int y)
{
    cout << x << " * " << y << " = ";
    int z;
    cin >> z;
    return x * y == z;
}

bool divint (int x, int y)
{
    cout << x << " / " << y << " = ";
    int z;
    cin >> z;
    return x / y == z;
}

bool calculate (int x, int y, bool (*pf) (int x, int y))
{
    return (*pf) (x, y);
}

bool isint (string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] > 57 || s[i] < 48)
        {
            return false;
        }
    }

    return true;
}

int randint (int min, int max)
{
    return min + rand() % max;
}
