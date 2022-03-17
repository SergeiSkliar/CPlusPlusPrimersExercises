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
	replace_pattern(s1, " r ", " are ");
	replace_pattern(s1, " u ", " you ");
	std::cout << s1;
}

void replace_pattern(std::string& s, const std::string& oldVal, const std::string& newVal)
{
	for (auto it_s = s.begin(); it_s < s.end() - oldVal.size() + 1; )
	{
		auto it_old = oldVal.cbegin();
		for (auto it = it_s; it_old < oldVal.end(); ++it_old, ++it)
		{
			if (*it != *it_old)
				break;
		}
		if (it_old == oldVal.cend())
		{
			std::string::size_type pos = it_s - s.begin();
			s.erase(pos, oldVal.size());
			s.insert(pos, newVal);
			it_s = s.begin() + pos + newVal.size();
		}
		else
			++it_s;
	}
}