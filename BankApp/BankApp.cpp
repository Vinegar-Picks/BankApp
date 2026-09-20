#include <iostream>
#include "BankAccount.h"
#include <string>
using namespace std;

int main()
{
	string username;
	double balance;
	cout << "Sandevistan Banking\n";
	cout << "===================\n";
	cout << "Please enter username\n";
	getline(cin, username);
	cout << "Please enter balance\n";
	cin >> balance;
	BankAccount Account1(username, balance);
	BankAccount Account2(username);
	Account2.SetBalance(balance);
	cout << "\nOwner: " << Account1.GetName() << endl;
	cout << "Balance: $" << Account1.GetBalance() << endl;
	double previousBalance;
	previousBalance = Account1.GetBalance();
	double withdrawamount;
	double depositamount;
	cout << "\nPlease enter withdraw amount\n";
	cin >> withdrawamount;
	cout << "Please Enter deposit amount\n";
	cin >> depositamount;
	Account1.Withdraw(withdrawamount);
	Account1.Deposit(depositamount);
	cout << "\nOwner:" << Account1.GetName() << endl;
	cout << "Previous balance: $" << previousBalance << endl;
	cout << "New balance: $" << Account1.GetBalance() << endl;


}

