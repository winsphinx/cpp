#include <iostream>
#include <cstring>

class Stock
{
public:
    void acquire (const char *co, int n, double price);
    void buy (int num, double price);
    void sell (int num, double price);
    void update (double price);
    void show();

private:
    /* data */
    char company[30];
    int shares;
    double share_value;
    double total_value;
    void set_total()
    {
        total_value = shares * share_value;
    }
};

void Stock::acquire (const char *co, int n, double price)
{
    std::strncpy (company, co, 29);
    company[29] = '\0';

    if (n < 0)
    {
        std::cerr << "Number of shares can't be negative. " << company << " shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }

    share_value = price;
    set_total();
}

void Stock::buy (int num, double price)
{
    if (num < 0)
    {
        std::cerr << "Number of shares purchesed can't be negative. " << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_value = price;
        set_total();
    }
}

void Stock::sell (int num, double price)
{
    using std::cerr;

    if (num < 0)
    {
        cerr << "Number of shares sold can't be negative. " << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cerr << "You can't sell more than you have. " << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_value = price;
        set_total();
    }
}

void Stock::update (double price)
{
    share_value = price;
    set_total();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout << "Company: " << company
         << " Shares: " << shares << endl
         << " Share Price: $" << share_value
         << " Total Price: $" << share_value << endl;
}

int main()
{
    using std::cout;
    using std::ios_base;
    Stock stock1;
    stock1.acquire ("NanoSmart", 20, 12.50);
    cout.setf (ios_base::fixed);
    cout.precision (2);
    cout.setf (ios_base::showpoint);
    stock1.show();
    stock1.buy (15, 10.25);
    stock1.show();
    stock1.sell (400, 20.00);
    stock1.show();

    return 0;
}
