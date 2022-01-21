#include <iostream>
#include"account.h"

int main() {
	Account test_account("some name", "13259360", 10.0);

	test_account.display();
	test_account.deposit(1234);
	test_account.display();
	test_account.withdraw(24);
	test_account.display();
}