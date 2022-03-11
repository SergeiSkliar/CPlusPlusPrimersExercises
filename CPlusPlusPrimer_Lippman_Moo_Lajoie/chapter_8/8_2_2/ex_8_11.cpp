// After reading the first line the EOF is setted, so it should be explicitly resetted by record.clear()
// Also we need to use record.str(line) to copy the string line into the stream

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

std::ostream& print(std::ostream& os, const PersonInfo& person)
{
	os << person.name;
	for (const auto& number : person.phones)
		std::cout << ' ' << number;
	return os;
}

int main()
{
	std::string line, word;
	std::vector<PersonInfo> people; // will hold all the records from the input
	// read the input a line at a time until cin hits end-of-file (or another error)
	std::istringstream record(line); // bind record to the line we just read
	while (std::getline(std::cin, line)) {
		PersonInfo info; // create an object to hold this record's data
		record.str(line);
		record >> info.name; // read the name
		while (record >> word) // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
		record.clear();
	}
	for (const auto& person : people)
		print(std::cout, person) << std::endl;
	return 0;
}