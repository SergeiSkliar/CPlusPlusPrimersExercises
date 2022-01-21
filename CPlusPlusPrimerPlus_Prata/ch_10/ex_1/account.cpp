#include "account.h"
#include<iostream>

Account::Account()
{
	name = "test";
	account_number = "test_number";
	balance = 0.0;
}

Account::Account(const std::string& n, const std::string acc_num, double b)
{
	name = n;
	account_number = acc_num;
	balance = b;
}

Account::~Account()
{
}

void Account::display()
{
	std::cout << "Depositor's name: " << name << std::endl;
	std::cout << "Account number: " << account_number << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}

void Account::deposit(double d)
{
	std::cout << "Depositing " << d << " on the account " << account_number << std::endl;
	balance += d;
	std::cout << "Current balance: " << balance << std::endl;
}

void Account::withdraw(double d)
{
	std::cout << "Withdrawing " << d << " from the account " << account_number << std::endl;
	balance -= d;
	std::cout << "Current balance: " << balance << std::endl;
}
