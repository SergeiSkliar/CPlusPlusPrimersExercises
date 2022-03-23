//Exercise 10.13: The library defines an algorithm named partition that
//takes a predicate and partitions the container so that values for which the
//predicate is true appear in the first partand those for which the predicate is
//false appear in the second part.The algorithm returns an iterator just past
//the last element for which the predicate returned true.Write a function that
//takes a string and returns a bool indicating whether the string has five
//characters or more.Use that function to partition words.Print the elements
//that have five or more characters.

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool five_or_more(string&);

int main() {
	vector<string> words{ "less", "some", "five1", "even more", "manywords" };

	for (auto& e : words)
	{
		cout << e << ' ';
	}
	cout << endl;
	for (auto& e : words)
	{
		partition(words.begin(), words.end(), five_or_more);
	}

	for (auto& e : words)
	{
		cout << e << ' ';
	}
	cout << endl;
}

bool five_or_more(string& s)
{
	return s.size() > 5;
}