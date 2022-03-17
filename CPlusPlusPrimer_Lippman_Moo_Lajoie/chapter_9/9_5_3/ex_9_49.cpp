//Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter
//extends above the middle of the line.A letter has a descender if, as with p or
//g, part of the letter extends below the line.Write a program that reads a file
//containing words and reports the longest word that contains neither
//ascenders nor descenders.

#include <string>
#include <iostream>
#include <fstream>

bool isAscDesc(const std::string& source);
std::string read(const std::string& source, const std::string& pattern);

int main() {
	std::string line, word;
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\9_5_3\\8_49.txt";
	std::ifstream input(ifile);
	std::ostream& os(std::cout);

	std::string ascenders = "tfhkldb";
	std::string descenders = "qypgj";
	std::string ascenders_descenders = "tfhkldbqypgj";
	std::string non_a_d = "weruioaszxcvnm";

}

bool isAscDesc(const std::string& source)
{
	std::string ascenders_descenders = "tfhkldbqypgj";;
	return (source.find_first_of(ascenders_descenders) != std::string::npos);
}

std::string read(const std::string& source, const std::string& pattern)
{
	std::string::size_type pos = 0;
	while ((pos = source.find_first_not_of(pattern, pos)) != std::string::npos) {
		std::cout << "longest word without ascenders nor descenders: " << pos
			<< " element is " << source[pos] << std::endl;
		++pos; // move to the next character
	}
}