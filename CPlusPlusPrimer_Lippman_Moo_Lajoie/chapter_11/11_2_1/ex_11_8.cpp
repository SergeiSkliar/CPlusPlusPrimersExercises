//Exercise 11.8: Write a program that stores the excluded words in a vector
//instead of in a set.What are the advantages to using a set ?

// I'm not sure that there are any advantages of using set intead of vector in this case.
// Except that set is more intuitive container to use

#include <vector>
#include <iostream>
#include <map>
#include <fstream>
#include <string>

using namespace std;


int main() {
	string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_11\\11_2_1\\11_in.txt";
	ifstream input(ifile);

	if (!input.is_open())
	{
		cerr << "Could not open file " << ifile << endl;
		return EXIT_FAILURE;
	}

	map<string, size_t> words;
	vector<string> exclude = { "The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a" };
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
		if (find(exclude.cbegin(), exclude.cend(), word) == exclude.cend())
			++words[word];
	}

	string outfile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_11\\11_2_1\\11_out.txt";
	ofstream output(outfile);
	for (const auto& w : words)
	{
		output << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}
}

