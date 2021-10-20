//Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the
//while loop from § 1.4.1 (p. 11) so that it no longer requires a block.Explain
//whether this rewrite improves or diminishes the readability of this code.

#include <iostream>
int main()
{
	int sum = 0, val = 1;
	// keep executing the while as long as val is less than or equal to 10
	// original loop body
	// { sum += val;
	// ++val; }
	while (val <= 10) 
		sum += val, ++val; // assigns sum + val to sum, add 1 to val

	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}