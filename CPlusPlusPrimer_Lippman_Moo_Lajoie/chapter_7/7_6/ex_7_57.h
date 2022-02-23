#pragma once
#include<string>

//boring -> skipped

class Account {
public:
	void calculateInterest() { balance += balance * interestRate; }
	static double rate() { return interestRate; }

private:
	std::string owner;
	double balance;
	static double interestRate;
};