#include "102head.h"
#include <iostream>
#include <cstring>

Stock::Stock()
{
    std::cout << "Default constructor called\n";
    std::strcpy (company, "no name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock (const char *co, int n, double pr)
{
    std::cout << "Constructor using " << co << " called\n";
    std::strncpy (company, co, 29);
    company[30] = '\0';

    if (n < 0)
    {
        std::cerr << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }

    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << "Bye, " << company << "!\n";
}

void Stock::buy (int num, double price)
{
    if (num < 0)
    {
        std::cerr << "Number of shares purchesed can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell (int num, double price)
{
    if (num < 0)
    {
        std::cerr << "Number of shares sold can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        std::cerr << "You can't sell more than ypu have! "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update (double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "Company: " << company
              << " Shares: " << shares << std::endl
              << " Share Price: $" << share_val
              << " Total Price: $" << total_val
              << std::endl;
}
