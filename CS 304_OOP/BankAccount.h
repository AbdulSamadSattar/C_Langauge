#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accountNumber, double balance);

    // Member functions
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};

#endif
