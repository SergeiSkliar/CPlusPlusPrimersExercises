//Exercise 9.45: Write a funtion that takes a string representing a name
//and two other strings representing a prefix, such as “Mr.” or “Ms.” and a
//suffix, such as “Jr.” or “III”.Using iterators and the insert and append
//functions, generate and return a new string with the suffix and prefix
//added to the given name.

#include <iostream>
#include <string>

std::string addPrefAndSuf(std::string& name, const std::string& pref, const std::string& suf);

int main() {
	std::string s1{ "John Smith" };
	std::string s2 = addPrefAndSuf(s1, "Mr.", "III");
	std::cout << s2;
}

std::string addPrefAndSuf(std::string& name, const std::string& pref, const std::string& suf)
{
	std::string newName = name;
	std::string prefix = pref;
	prefix.append(" ");
	newName.insert(newName.begin(), prefix.begin(), prefix.end());
	newName.append(" " + suf);
	return newName;
}