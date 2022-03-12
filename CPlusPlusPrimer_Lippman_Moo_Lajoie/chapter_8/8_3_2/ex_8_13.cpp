#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

bool valid(const std::string&);
std::string format(const std::string&);


int main() {
	std::string line, word;
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\8_3_2\\8_13_in.txt";
	std::ifstream input(ifile);
	std::ostream& os(std::cout);
	std::vector<PersonInfo> people; 

	if (!input.is_open()) {
		std::cerr << "Could not open the file - '"
			<< ifile << "'" << std::endl;
		return EXIT_FAILURE;
	}

	while (std::getline(input, line)) {
		PersonInfo info; 
		std::istringstream record(line); 
		record >> info.name; 
		while (record >> word) 
			info.phones.push_back(word); 
		people.push_back(info); 
	}

	for (const auto& entry : people) { // for each entry in people
		std::ostringstream formatted, badNums; // objects created on each loop
		for (const auto& nums : entry.phones) { // for each number
			if (!valid(nums)) {
				badNums << " " << nums; // string in badNums
			}
			else
				// ''writes'' to formatted's string
			{
				formatted << " " << format(nums);
			}
				
			if (badNums.str().empty()) // there were no bad numbers
			{
				os << entry.name << " " // print the name
					<< formatted.str() << std::endl; // and reformatted numbers
			}
			
			else // otherwise, print the name and bad numbers
				std::cerr << "input error: " << entry.name
				<< " invalid number(s) " << badNums.str() <<
				std::endl;

		}
	}
}

bool valid(const std::string& phone_num)
{
	if (phone_num.size() != 11)
		return false;
	for (const auto& n : phone_num)
	{
		if (!isdigit(n))
			return false;
	}
	return true;
}

std::string format(const std::string& phone_num)
{
	// format 7-910-999-99-99
	return phone_num.substr(0, 1) + '-' + phone_num.substr(1, 3) + '-' + phone_num.substr(4, 3) + '-' + phone_num.substr(7, 2) + '-' + phone_num.substr(9, 2);
}