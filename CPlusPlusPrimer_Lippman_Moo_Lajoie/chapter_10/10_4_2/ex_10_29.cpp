//Exercise 10.29: Write a program using stream iterators to read a text file
//into a vector of strings.

#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

int main() {
	std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_4_2\\10_29_in.txt";

	ifstream input(ifile);
	if (!input)
	{
		cout << "cannot open.";
	}

	istream_iterator<string> inputFromFile(input), eof;
	vector<string> vec(inputFromFile, eof);

	for (const auto& e : vec)
	{
		cout << e << endl;
	}
}