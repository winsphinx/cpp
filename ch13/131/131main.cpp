#include "131head.h"
#include <iostream>

// int main()
//{
//    using std::cout;
//    using std::endl;
//    Brass Piggy("Porcelot Pigg", 381299, 4000);
//    BrassPlus Hoggy("Horatio Hogg", 382288, 3000);
//    Piggy.ViewAcct();
//    cout << endl;
//    Hoggy.ViewAcct();
//    cout << endl;
//    cout << "Depositing $1000 into the Hogg account: \n";
//    Hoggy.Deposit(1000);
//    cout << "New balance: $" << Hoggy.Balance() << endl;
//    cout << "Withdrawing $4200 from Pigg account: \n";
//    Piggy.Withdraw(4200);
//    cout << "Pigg account balance: $" << Piggy.Balance() << endl;
//    cout << "Withdrawing $4200 from Hogg account: \n";
//    Hoggy.Withdraw(4200);
//    Hoggy.ViewAcct();
//    return 0;
//}

const int CLIENTS = 4;
const int LEN = 40;
int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  Brass *p_clients[CLIENTS];
  int i;

  for (i = 0; i < CLIENTS; i++) {
    char temp[LEN];
    long tempnum;
    double tempbal;
    char kind;
    cout << "Enter clients name: ";
    cin.getline(temp, LEN);
    cout << "Enter clients account number: ";
    cin >> tempnum;
    cout << "Enter opening balance: $";
    cin >> tempbal;
    cout << "Enter 1 for Brass account or "
         << "2 for BrassPlus account: ";

    while (cin >> kind && (kind != '1' && kind != '2')) {
      cout << "Enter either 1 or 2:";
    }

    if (kind == '1') {
      p_clients[i] = new Brass(temp, tempnum, tempbal);
    } else {
      double tmax, trate;
      cout << "Enter the overdraft limit: $";
      cin >> tmax;
      cout << "Enter the interest rate "
           << "as a decimal fraction: ";
      cin >> trate;
      p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
    }

    while (cin.get() != '\n') {
      continue;
    }
  }

  cout << endl;

  for (i = 0; i < CLIENTS; i++) {
    p_clients[i]->ViewAcct();
    cout << endl;
  }

  for (i = 0; i < CLIENTS; i++) {
    delete p_clients[i];
  }

  cout << "Done.\n";
  return 0;
}
