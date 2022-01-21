#pragma once
#include<string>

class Account {
private:
	std::string name;
	std::string account_number;
	double balance;
public:
	Account();
	Account(const std::string& n, const std::string acc_num, double b);
	~Account();

	void display();
	void deposit(double d);
	void withdraw(double d);
};