#include <iostream>
#include <string>
#include <fstream>

struct PRI {
	std::string name;
	double contrib_amount;
};

int main() {

	std::ifstream input_file;
	std::string inputFilename;
	std::cout << "Enter input filename: ";
	std::cin >> inputFilename;
	input_file.open(inputFilename);
	if (!input_file.is_open())
	{
		std::cout << "Could not open the file " << inputFilename << std::endl;
		//std::cout << "Could not open the file " << std::endl;
		std::cout << "Program terminating." << std::endl;
		exit(EXIT_FAILURE);
	}

	int grand_patrons = 0;
	int patrons = 0;
	int num_of_contributors;

	(input_file >> num_of_contributors).get();
	std::cout << "Number of contributors: " << num_of_contributors << '\n';

	PRI* all_patrons = new PRI[num_of_contributors];

	for (int i = 0; i != num_of_contributors; ++i)
	{
		std::getline(input_file, all_patrons[i].name);
		std::cout << "Name: " << all_patrons[i].name << std::endl;
		//input_file >> all_patrons[i].contrib_amount;
		(input_file >> all_patrons[i].contrib_amount).get();
		std::cout << "Amount of contribution: " << all_patrons[i].contrib_amount << std::endl;
	}

	// Grand Patrons
	std::cout << "Grand Patrons:\n";
	for (int i = 0; i != num_of_contributors; ++i)
	{
		if (all_patrons[i].contrib_amount >= 10000) {
			std::cout << all_patrons[i].name << " donated: " << all_patrons[i].contrib_amount << '\n';
			++grand_patrons;
		}
	}

	//Check if there are any Grand patrons 
	if (grand_patrons == 0) {
		std::cout << "None" << std::endl;
	}

	//Patrons
	std::cout << "Patrons:\n";
	for (int i = 0; i != num_of_contributors; ++i)
	{
		if (all_patrons[i].contrib_amount < 10000) {
			std::cout << all_patrons[i].name << "donated: " << all_patrons[i].contrib_amount << '\n';
			++patrons;
		}
	}

	//Check if there are any patrons 
	if (patrons == 0) {
		std::cout << "None" << std::endl;
	}

	delete[] all_patrons;

	if (input_file.eof())
		std::cout << "End of file reached.\n";
	else if (input_file.fail())
		std::cout << "Input terminated by data mismatch.\n";
	else
		std::cout << "Input terminated for unknown reason.\n";

}