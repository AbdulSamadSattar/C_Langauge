#include <iostream>
#include "BankAccount.h"
#include "BankAccount.cpp"

int main() {
    // Create a bank account object
    BankAccount account(123456, 1000.0);

    // Display initial account information
    std::cout << "Initial Account Information:\n";
    account.display();

    // Deposit some money
    account.deposit(500.0);
    std::cout << "\nAfter depositing $500:\n";
    account.display();

    // Withdraw some money
    account.withdraw(200.0);
    std::cout << "\nAfter withdrawing $200:\n";
    account.display();

    // Try to withdraw more money than the balance
    std::cout << "\nTrying to withdraw $2000:\n";
    account.withdraw(2000.0);

    return 0;
}
