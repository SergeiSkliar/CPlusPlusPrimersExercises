//Exercise 9.20: Write a program to copy elements from a list<int> into
//two deques.The even - valued elements should go into one deque and the
//odd ones into the other.

#include <deque>
#include <list>
#include <iostream>

int main() {
	std::list<int> all = {1,2,3,4,5,6,7,8,9,0};
	std::deque<int> even, odd;
	//std::deque<int> odd;
	for (const auto& e : all)
	{
		if (e % 2 == 0)
		{
			even.push_back(e);
		}
		else
		{
			odd.push_back(e);
		}
	}
	std::cout << "Even: " << std::endl;
	for (auto b = even.begin(); b != even.end(); ++b)
	{
		std::cout << *b << std::endl;
	}
	std::cout << "Odd: " << std::endl;
	for (auto b = odd.begin(); b != odd.end(); ++b)
	{
		std::cout << *b << std::endl;
	}
}