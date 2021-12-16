#include <iostream>
#include "ex_10_1.h"

BankAccount::BankAccount() {
	name_ = "no name";
	account_number_ = "undefined";
	balance_ = 0.0;
}

BankAccount::BankAccount(const std::string& name, const std::string& account_number, double balance) {
	name_ = name;
	account_number_ = account_number;
	if (balance < 0) {
		std::cout << "Can't create new account with negative balance. "
			<< "Balance set to 0." << std::endl;
		balance_ = 0;
	}
	else {
		balance_ = balance;
	}
}

BankAccount::~BankAccount(){}

void BankAccount::show() const {
	std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	std::cout << "Name: " << name_
		<< "Account number: " << account_number_ << std::endl;
	std::cout.precision(2);
	std::cout << "Balance: " << balance_ << std::endl;

	std::cout.setf(orig, std::ios_base::floatfield);
	std::cout.precision(3);
}

void BankAccount::deposit(double amount) {
	balance_ += amount;
}

void BankAccount::withdraw(double amount) {
	balance_ -= amount;
}