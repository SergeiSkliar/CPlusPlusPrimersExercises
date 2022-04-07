//Exercise 11.4: Extend your program to ignore case and punctuation.For
//example, “example.” “example, ”and “Example” should all increment the same
//counter.

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
		for (auto& c : word)
		{
			c = tolower(c);
		}
		if (ispunct(word.front()))
		{
			word.erase(0, 1);
		}
		if (ispunct(word.back()))
		{
			word.pop_back();
		}
		++words[word];
	}
	string outfile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_11\\11_1\\11_3_out.txt";
	ofstream output(outfile);
	for (const auto& w : words)
	{
		output << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}
}