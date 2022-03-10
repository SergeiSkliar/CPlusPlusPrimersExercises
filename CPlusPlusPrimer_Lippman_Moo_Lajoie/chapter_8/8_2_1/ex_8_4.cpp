#include <iostream>
#include <fstream>
#include <string>
#include <vector>


std::ifstream& read(std::ifstream& is, std::vector<std::string>& out);


int main() {
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\8_2_1\\8_4.txt";
	std::vector<std::string> output;
	std::ifstream input(ifile);

	if (!input.is_open()) {
		std::cerr << "Could not open the file - '"
			<< ifile << "'" << std::endl;
		return EXIT_FAILURE;
	}

	read(input, output);
	input.close();
	for (const auto& e : output) {
		std::cout << e << std::endl;
	}

}

std::ifstream& read(std::ifstream& is, std::vector<std::string>& out)
{
	std::string temp = "";
	//is >> temp;
	//out.push_back(temp);
	while (getline(is, temp)) {
		out.push_back(temp);
	}
	return is;
}

