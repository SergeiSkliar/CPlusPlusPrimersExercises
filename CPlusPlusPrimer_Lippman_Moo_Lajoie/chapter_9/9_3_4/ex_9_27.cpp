//Exercise 9.27: Write a program to find and remove the odd - valued
//elements in a forward_list<int>.

#include <forward_list>
#include <iostream>

int main() {
	std::forward_list<int> lst = { 1,2,3,4,5,6,7,8,9,0 };

	auto prev = lst.before_begin();
	auto curr = lst.begin();

	while (curr != lst.end())
	{
		if (*curr % 2)
			curr = lst.erase_after(prev);
		else
		{
			prev = curr;
			++curr;
		}
	}

	for (const auto& e : lst)
	{
		std::cout << e << ' ';
	}
}