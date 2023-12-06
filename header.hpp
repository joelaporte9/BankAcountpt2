#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    float balance;

public:
    // Constructor
    BankAccount(float bal) {
        balance = bal;
    }

    // Function to get the balance
    float getBalance() {
        return balance;
    }
    void deposit(float amount) {
        balance += amount; // Add the deposited amount to the balance
    }

    // Member function to withdraw money
    void withdrawal(float amount) {
        if (balance >= amount) {
            balance -= amount; // Subtract the withdrawn amount from the balance
        }
        else {
            cout << "Error: Insufficient funds" << endl;
        }
    }

    void output() const {
        cout << "The balance is $" << fixed << setprecision(2) << balance << endl;
    }
};