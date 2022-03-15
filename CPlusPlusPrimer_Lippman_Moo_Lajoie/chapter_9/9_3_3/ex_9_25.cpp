#include <iostream>
#include <list>
#include <vector>

int main() {
	std::list<int> slist = { 1,2,3,4,5 };
	std::vector<int> vec = { 1,2,3,4,5 };

	auto elem1 = slist.end();
	auto elem2 = slist.end();
	//auto elem1 = vec.begin();
	//auto elem2 = elem1;

	elem1 = slist.erase(elem1, elem2);

	if (slist.empty())
	{
		std::cout << "Empty list";
	}
	else
	{
		for (const auto& e : slist) {
			std::cout << e << std::endl;
		}
	}
}