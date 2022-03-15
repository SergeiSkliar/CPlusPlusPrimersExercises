//Exercise 9.28: Write a function that takes a forward_list<string> and
//two additional string arguments.The function should find the first string
//and insert the second immediately following the first.If the first string is
//not found, then insert the second string at the end of the list.

#include <forward_list>
#include <string>
#include <iostream>

void stringInsert(std::forward_list<std::string>&, const std::string&, const std::string&);

int main() {
	std::forward_list<std::string> lst = {"The ", "Hitchhiker's ", "Guide ", " ADDITIONAL TEST"};
	std::string str1 = "Guide ";
	std::string str2 = "to the Galaxy";

	stringInsert(lst, str1, str2);
	for (const auto& e : lst)
	{
		std::cout << e;
	}
}

void stringInsert(std::forward_list<std::string>& ls, const std::string& s1, const std::string& s2)
{
	//auto prev = ls.before_begin();
	auto curr = ls.begin();
	while (curr != ls.end())
	{
		if (s1 == *curr)
		{
			curr = ls.insert_after(curr, s2);
		}
		else
		{
			++curr;
		}
	}
}