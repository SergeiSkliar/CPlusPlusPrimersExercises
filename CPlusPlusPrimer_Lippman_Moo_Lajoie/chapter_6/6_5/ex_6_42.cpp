#include <iostream>
#include <string>

// return the plural version of word if ctr is greater than 1
std::string make_plural(size_t ctr, const std::string& word, const std::string& ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main() {
	std::string success = "success";
	std::string failure = "failure";

	std::cout << make_plural(1, success) << std::endl;
	std::cout << make_plural(3, success, "es") << std::endl;
	std::cout << make_plural(1, failure) << std::endl;
	std::cout << make_plural(3, failure) << std::endl;
}