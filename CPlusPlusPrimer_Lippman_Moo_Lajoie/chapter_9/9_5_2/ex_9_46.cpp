//Exercise 9.46: Rewrite the previous exercise using a positionand length to
//manage the strings.This time use only the insert function.

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
	newName.insert(0, pref + " ");
	newName.insert(newName.size(), " " + suf);
	return newName;
}