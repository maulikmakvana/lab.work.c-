#include <iostream>
#include <string.h>  
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    char customerName[50];
    float currentBalance;
    double transactionAmount;



public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        fflush(stdin);
        cout << "Enter Account Holder Name: ";
        gets(customerName);

        cout << "Enter Initial Balance: ";
        cin >> currentBalance;
    }


    void depositAmount()
    {
        cout << "Enter amount to deposit: ";
        cin >> transactionAmount;
        currentBalance += transactionAmount;
        cout << "Balance: " << currentBalance << endl;
    }


    void withdrawAmount()
    {
        cout << "Enter amount to withdraw: ";
        cin >> transactionAmount;

        if (transactionAmount > currentBalance)
        {
            cout << "Not enough balance" << endl;
        }
        else
        {
            currentBalance -= transactionAmount;
           
            cout << "Balance: " << currentBalance << endl;
        }
    }


    void displayBalance()
    {
        cout << "Balance: " << currentBalance << endl;
    }

    void displayAccountDetails()
    {
        cout << endl
             << "--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << customerName << endl;
        cout << "Balance: " << currentBalance << endl;
    }
};


class CurrentAccount : public BankAccount
{
    float overdraftLimit;

public:
    void withdrawWithOverdraft()
    {
        overdraftLimit = 6000;

        cout << "Enter amount to withdraw: ";
        cin >> transactionAmount;

        if (transactionAmount > currentBalance + overdraftLimit)
        {
            cout << "Overdraft limit exceeded" << endl;
        }
        else
        {
            double overdraftUsed = 0;
            if (transactionAmount > currentBalance)
                overdraftUsed = transactionAmount - currentBalance;

            currentBalance -= transactionAmount;

            cout << "Withdrawal successful." << endl;
            cout << "Balance: " << currentBalance << endl;

            if (overdraftUsed > 0)
                cout << "Overdraft : " << overdraftUsed << endl;
        }
    }

    void displayMenu()
    {
        int userChoice;
        do
        {
        cout << endl;
        cout << "---- Dashboard ----" << endl;
        cout << "1. View Balance" << endl;
        cout << "2. Add Funds" << endl;
        cout << "3. Withdraw Funds" << endl;
        cout << "4. Account Details" << endl;
        cout << "0. Exit Program" << endl;
        cout << "Enter your option: ";
        cin >> userChoice;


            switch (userChoice)
            {
            case 1:
                displayBalance();
                break;
            case 2:
                depositAmount();
                break;
            case 3:
                withdrawWithOverdraft();
                break;
            case 4:
                displayAccountDetails();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
            }

        } while (userChoice != 0);
    }
};



