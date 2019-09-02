#ifndef MY_131_HEAD_H
#define MY_131_HEAD_H

class Brass {
public:
  Brass(const char *s = "NoName", long an = -1, double bal = 0.0);
  void Deposit(double amt);
  virtual void Withdraw(double amt);
  double Balance() const;
  virtual void ViewAcct() const;
  virtual ~Brass() {}

private:
  const static int MAX = 35;
  char fullname[MAX];
  long acctNum;
  double balance;
};

class BrassPlus : public Brass {
public:
  BrassPlus(const char *s = "NoName", long an = -1, double bal = 0.0,
            double ml = 500, double r = .1);
  BrassPlus(const Brass &b, double ml = 500, double r = .1);
  virtual void ViewAcct() const;
  virtual void Withdraw(double amt);
  void ResetMax(double m) { maxLoan = m; };
  void ResetRate(double r) { rate = r; };
  void ResetOews() { owesBank = 0; };

private:
  double maxLoan;
  double rate;
  double owesBank;
};
#endif
