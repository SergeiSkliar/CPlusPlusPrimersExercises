#pragma once
#ifndef EX_10_1
#define EX_10_1

#include<string>

class BankAccount {
private:
	std::string name_;
	std::string account_number_;
	double balance_;
public:
	BankAccount();
	BankAccount(const std::string & name, const std::string& account_number, double balance = 0);
	~BankAccount();
	void show() const;
	void deposit(double amount);
	void withdraw(double amount);
};
#endif // !EX_10_1
