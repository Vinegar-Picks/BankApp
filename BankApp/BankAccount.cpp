#include "BankAccount.h"
#include <string>
#include <iostream>
using namespace std;

BankAccount::BankAccount(string n)
{
	this->Name = n;
	this->Balance = 0;
}
BankAccount::BankAccount(string n, double b)
{
	this->Name = n;
	this->Balance = b;
}
void BankAccount::Withdraw(double amount)
{
	if (amount > 500)
	{
		cout << "Only allowed to withdraw $500 or less" << endl;
	}
	else if (amount > Balance)
	{
		cout << "\nInsufficient Funds" << endl;
	}
	else
	{
		this->Balance = Balance - amount;
		cout << "\nSuccesfully withdrew $" << amount << endl;
	}
}
void BankAccount::Deposit(double amount)
{
	if (amount > 1000)
	{
		cout << "Only allowed to deposit $1000 or less" << endl;
	}
	else if (amount == 0)
	{
		cout << "No funds deposited" << endl;
	}
	else
	{
		this->Balance = Balance + amount;
		cout << "Succesfully deposited $" << amount << endl;
	}
}
void BankAccount::SetBalance(double amount)
{
	this->Balance = amount;
}
string BankAccount::GetName()
{
	return Name;
}
double BankAccount::GetBalance()
{
	return Balance;
}