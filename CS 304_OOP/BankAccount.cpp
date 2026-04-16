#include "BankAccount.h"
#include <iostream>

// Constructor definition
BankAccount::BankAccount(int accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}

// Deposit function definition
void BankAccount::deposit(double amount) {
    balance += amount;
}

// Withdraw function definition
void BankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds\n";
    }
}

// Display function definition
void BankAccount::display() {
    std::cout << "Account Number: " << accountNumber << "\n";
    std::cout << "Balance: $" << balance << "\n";
}
