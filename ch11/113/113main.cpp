#include "113head.h"

int main()
{
    using namespace COMPLEX;
    using namespace std;
    Complex a;
    Complex b;
    cout << "输入第一个复数：" << endl;
    cin >> a;
    cout << "输入第二个复数：" << endl;
    cin >> b;

    cout << "第一个复数为：" << a << endl;
    cout << "其共轭复数为：" << ~a << endl;
    cout << "第一个复数为：" << b << endl;
    cout << "其共轭复数为：" << ~b << endl;
    cout << "和为：" << a + b << endl;
    cout << "差为：" << a - b << endl;
    cout << "积为：" << a *b << endl;

    cout << "输入一个实数（倍数）：";
    double n;
    cin >> n;
    cout << "乘积为：" << n *a << endl;
    cout << "乘积为：" << b *n << endl;

    return 0;
}
