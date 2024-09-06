/*Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.*/
#include <iostream>
#include <conio.h>

using namespace std;

class BankAccount
{
private:
    double AccountNumber, GetBalance;

public:
    void Account(double accNum, double balance)
    {
        AccountNumber = accNum;
        GetBalance = balance;
    }
    void accoutinfo()
    {
        cout << fixed << "Account Number = " << AccountNumber << endl;
        cout << "Available Balance = " << GetBalance << endl;
    }
    void Deposit(int amount)
    {
        if (amount >= 0)
        {
            GetBalance += amount;
            cout << endl<<"Deposit Succesfully " << amount << endl;
            cout << "Available Balance = " << GetBalance << endl;
        }
        else
        {
            cout << "Enter the Valid Amount ";
        }
    }
    void withdraw(int amount)
    {
        if (amount >= 0 && amount <= GetBalance)
        {
            GetBalance -= amount;
            cout << "withdraw Succesfully "
                 << amount << endl;
        }
        else
        {
            cout << "Balance is low Enter the vlaid amount " << endl;
        }
    }
};
int main()
{
    int amount, withdraw, balance;
    double accnum;
    cout << "Enter the Account Number = ";
    cin >> accnum;
    cout << "Enter the Balance = ";
    cin >> balance;

    cout << "Enter The Deposit Amount = ";
    cin >> amount;
    cout << "Enter the withdraw Amount = ";
    cin >> withdraw;

    BankAccount obj;
    obj.Account(accnum, balance);

    obj.Deposit(amount);
    obj.withdraw(withdraw);
    obj.accoutinfo();
    getch();
}