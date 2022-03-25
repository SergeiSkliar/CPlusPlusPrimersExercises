//Exercise 10.20: The library defines an algorithm named count_if.Like
//find_if, this function takes a pair of iterators denoting an input range and
//a predicate that it applies to each element in the given range.count_if
//returns a count of how often the predicate is true.Use count_if to rewrite
//the portion of our program that counted how many words are greater than
//length 6.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void biggies(vector<string>& words, vector<string>::size_type size);
void elimDups(vector<string>& w);
void printVec(vector<string>& w);
string make_plural(size_t ctr, const string& word, const string& ending);

int main() {
	vector<string> words;
	string s;
	while (cin >> s)
	{
		words.push_back(s);
	}
	printVec(words);
	biggies(words, 6);
	printVec(words);

}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	elimDups(words);
	//stable_sort(words.begin(), words.end(), [](const string& s1, const string& s2) {return s1.size() < s2.size(); });
	//auto word_count = partition(words.begin(), words.end(), [size](const string& s) {return s.size() >= size; });
	auto count = count_if(words.begin(), words.end(), [size](const string& s) {return s.size() > size; });
	cout << count << ' ' << make_plural(count, "word", "s") << " of length " << size << " or longer." << endl;
	//for_each(word_count, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

void elimDups(vector<string>& w)
{
	auto end_unique = unique(w.begin(), w.end());
	printVec(w);
	w.erase(end_unique, w.end());
}

void printVec(vector<string>& w)
{
	for (const auto& e : w)
	{
		cout << e << ' ';
	}
	cout << endl;
}

string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}