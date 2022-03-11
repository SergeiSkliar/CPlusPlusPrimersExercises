#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

int main() {
	std::string line, word;

	std::vector<std::string> out;
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\8_3_1\\8_10_in.txt";
	std::ifstream in(ifile);
	while (std::getline(in, line))
	{
		out.push_back(line);
	}

	for (const auto& e : out)
	{
		std::cout << e << std::endl;
	}
	
	std::cout << std::endl;

	for (const auto& e : out)
	{
		std::istringstream read(e);
		std::string word;
		while (read >> word) 
		{
			std::cout << word << std::endl;
		}
	}
}