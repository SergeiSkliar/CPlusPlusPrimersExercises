//Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter
//extends above the middle of the line.A letter has a descender if, as with p or
//g, part of the letter extends below the line.Write a program that reads a file
//containing words and reports the longest word that contains neither
//ascenders nor descenders.

#include<string>
#include<iostream>
#include <fstream>

std::string read(const std::string& s, const std::string& pattern);

int main() {
	std::string line, word;
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\9_5_3\\8_49.txt";
	std::ifstream input(ifile);
	std::ostream& os(std::cout);

	std::string ascenders = "tfhkld";
	std::string descenders = "qypgj";
	std::string non_a_d = "weruioaszxcvbnm";

}

std::string read(const std::string& s, const std::string& pattern)
{

}