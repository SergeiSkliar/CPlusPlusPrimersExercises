//Exercise 9.44: Rewrite the previous function using an index and replace.

#include <iostream>
#include <string>

void replace_pattern(std::string& s, const std::string& oldVal, const std::string& newVal);

int main() {
	std::string s1{ "going thru, r u ok?" };
	replace_pattern(s1, "thru", "through");
	replace_pattern(s1, " r ", " are ");
	replace_pattern(s1, " u ", " you ");
	std::cout << s1;
}

void replace_pattern(std::string& s, const std::string& oldVal, const std::string& newVal)
{
	decltype(s.size()) i;
	for (i = 0; i < s.size(); )
	{

		if (s.substr(i, oldVal.size()) == oldVal)
		{
			s.replace(i, oldVal.size(), newVal);
			i +=newVal.size();
		}
		else 
			++i;
	}
}