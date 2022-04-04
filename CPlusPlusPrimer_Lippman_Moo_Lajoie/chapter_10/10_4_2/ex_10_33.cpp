//Exercise 10.33: Write a program that takes the names of an input file and
//two output files.The input file should hold integers.Using an
//istream_iterator read the input file.Using ostream_iterators, write
//the odd numbers into the first output file.Each value should be followed by a
//space.Write the even numbers into the second file.Each of these values
//should be placed on a separate line.

#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_4_2\\10_33_in.txt";

	string oddOutfile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_4_2\\10_33_odd.txt";
	string evenOutfile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_4_2\\10_33_even.txt";


	ifstream input(ifile);
	if (!input)
	{
		cout << "cannot open.";
	}
	ofstream outputOdd(oddOutfile), outputEven(evenOutfile);

	istream_iterator<int> inputFromFile(input), eof;
	ostream_iterator<int> outputOddFile(outputOdd, " "), outputEvenFile(outputEven, "\n");

	// straighforward solution
	while (inputFromFile != eof)
	{
		if (*inputFromFile % 2 == 0)
		{
			outputEvenFile = *inputFromFile;
		}
		else
		{
			outputOddFile = *inputFromFile;
		}
		++inputFromFile;
	}

	// using for_each algorithm
	for_each(inputFromFile, eof, [&](int i) { i % 2 ? outputOddFile = i : outputEvenFile = i; });

	input.close();
	outputOdd.close();
	outputEven.close();
}