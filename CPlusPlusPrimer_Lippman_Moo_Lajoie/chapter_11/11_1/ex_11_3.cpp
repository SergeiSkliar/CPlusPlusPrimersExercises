//Exercise 11.3: Write your own version of the word - counting program.

#include <iostream>
#include <map>
#include <set>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_11\\11_1\\11_3_in.txt";
	ifstream input(ifile);

	if (!input.is_open())
	{
		cerr << "Could not open file " << ifile << endl;
		return EXIT_FAILURE;
	}

	map<string, size_t> words;
	string word;
	while (input >> word)
	{
		++words[word];
	}
	string outfile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_11\\11_1\\11_3_out.txt";
	ofstream output(outfile);
	for (const auto& w : words)
	{
		output << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}
}