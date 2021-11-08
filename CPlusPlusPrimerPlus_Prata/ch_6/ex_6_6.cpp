#include <iostream>
#include <string>

struct PRI {
	std::string name;
	double contrib_amount;
};

int main() {

	std::string name_input;
	int grand_patrons = 0;
	int patrons = 0;
	double contribution_input, num_of_contributors;

	std::cout << "Please enter the number of contributors: ";
	std::cin >> num_of_contributors;

	PRI* all_patrons = new PRI[num_of_contributors];
	
	for (int i = 0; i != num_of_contributors; ++i)
	{
		std::cout << "Enter the name of contributor: ";
		std::cin >> all_patrons[i].name;
		std::cout << "Enter the amount of contribution: ";
		std::cin >> all_patrons[i].contrib_amount;
	}

	// Grand Patrons
	std::cout << "Grand Patrons: ";
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
	std::cout << "Patrons: ";
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
}