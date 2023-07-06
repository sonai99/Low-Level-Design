#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

    // Constructor
public:
    BankAccount(const string &accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Getter
    string getAccountNumber() const
    {
        return accountNumber;
    }
    double getBalance() const
    {
        return balance;
    }
    // Setter
    void setBalance(double newBalance)
    {
        balance = newBalance;
    }
    // Function to deposit money
    void deposit(double amount)
    {
        balance += amount;
        cout << "Depost of $" << amount << "succesfull. \n";
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }
};

int main()
{
    BankAccount myAccount("123456789", 1200.0);
    // cout << myAccount.getBalance();
    myAccount.withdraw(12500);
    cout << myAccount.getBalance();
}