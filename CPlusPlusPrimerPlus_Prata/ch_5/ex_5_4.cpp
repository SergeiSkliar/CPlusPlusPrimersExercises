//4. Daphne invests $100 at 10 % simple interest.That is, every year, the investment earns
//10 % of the original investment, or $10 each and every year :
//interest = 0.10 × original balance
//At the same time, Cleo invests $100 at 5 % compound interest.That is, interest is 5 %
//of the current balance, including previous additions of interest :
//interest = 0.05 × current balance
//Cleo earns 5 % of $100 the first year, giving her $105.The next year she earns 5 % of
//$105, or $5.25, and so on.Write a program that finds how many years it takes for
//the value of Cleo’s investment to exceed the value of Daphne’s investmentand then
//displays the value of both investments at that time.

#include <iostream>

int main() {
	double daphne_balance = 100, cleo_balance = 100;
	double simple_interest_earn = 0.1, compound_interest_earn = 0.05;

	int cnt = 1;

	double daphne_earnings = 100;
	double cleo_earnings = 0;

	do {
		daphne_earnings += (daphne_balance * simple_interest_earn);
		cleo_earnings = cleo_balance + (cleo_balance * compound_interest_earn);
		cleo_balance = cleo_earnings;
		++cnt;
		std::cout << daphne_earnings << "\t" << cleo_earnings << "\t" << std::endl;
	} while (cleo_earnings < daphne_earnings);

	std::cout << cnt;
}