#include <iostream>
#include "ex_10_1.h"

int main() {
	BankAccount acc = {"Kitty Cat", "BA01", 157.0};
	std::cout << "KC account:\n";
	acc.show();
	acc.deposit(200);
	acc.show();
	acc.withdraw(49.91);
	acc.show();
}