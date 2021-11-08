#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main() {
	
	char letter;
	std::ifstream input_file;
	std::string inputFilename;
	std::cout << "Enter input filename: ";
	std::cin >> inputFilename;
	input_file.open(inputFilename);
	if (!input_file.is_open())
	{
		std::cout << "Could not open the file " << inputFilename << std::endl;
		std::cout << "Program terminating." << std::endl;
		exit(EXIT_FAILURE);
	}

	int count = 0;

	input_file >> letter;
	while (input_file.good())
	{
		if (isalnum(letter))
			++count;
		input_file >> letter;
	}
	if (input_file.eof())
		std::cout << "End of file reached.\n";
	else if (input_file.fail())
		std::cout << "Input terminated by data mismatch.\n";
	else
		std::cout << "Input terminated for unknown reason.\n";


	if (count == 0)
		std::cout << "No characters/data.\n";
	else
	{
		std::cout << "Number of characters in " << inputFilename << " is " << count;
	}

	input_file.close();
}