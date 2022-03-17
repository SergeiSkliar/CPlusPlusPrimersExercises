//Exercise 9.43: Write a function that takes three strings, s, oldVal, and
//newVal.Using iterators, and the insertand erase functions replace all
//instances of oldVal that appear in s by newVal.Test your function by
//using it to replace common abbreviations, such as “tho” by “though”and
//“thru” by “through”

#include <iostream>
#include <string>

void replace_pattern(std::string& s, const std::string& oldVal, const std::string& newVal);

int main() {
	std::string s1{"going thru, r u ok?"};
	replace_pattern(s1, "thru", "through");
	replace_pattern(s1, "r", "are");
	replace_pattern(s1, "u", "you");
	std::cout << s1;
}

void replace_pattern(std::string& s, const std::string& oldVal, const std::string& newVal)
{
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		auto pattern = oldVal.cbegin();
		auto pos = it;
		while (*pattern == *it)
		{
			++it;
			++pattern;
		}

		if (pattern == oldVal.cend())
		{
			pos = s.erase(pos, it);
			it = s.insert(pos, newVal.cbegin(), newVal.cend());
		}
	}
}