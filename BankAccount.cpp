// binarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include "header.hpp"

using namespace std;



int main() {
    float startingBalance = 0.0f;
    float pay = 0.0f;
    float cashWithdrawl = 0.0f;
    float totalAfterWithdrawl;

    cout << "How much money is in your account: ";
    cin >> startingBalance;

    BankAccount bank(startingBalance);
    cout << "Savings: " << bank.getBalance() << endl;

    cout << "How much were you paid this week: ";
    cin >> pay;

    bank.deposit(pay);

    cout << "Deposited $" << pay << " into your account." << endl;
    bank.output();

    cout << "How much money would you like to withdrawl today?: " ;
    cin >> cashWithdrawl;
    bank.withdrawal(cashWithdrawl);
    totalAfterWithdrawl = bank.getBalance() - cashWithdrawl;
    cout << "Withdrawling " << cashWithdrawl << endl;
    bank.output();

    return 0;
}