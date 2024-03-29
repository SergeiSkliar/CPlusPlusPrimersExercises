//Exercise 10.18: Rewrite biggies to use partition instead of find_if.
//We described the partition algorithm in exercise 10.13 in � 10.3.1 (p.
//	387).

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void biggies(vector<string>& words, vector<string>::size_type size);
bool isShorter(const string& s1, const string& s2);
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
	biggies(words, 7);
	printVec(words);

}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string& s1, const string& s2) {return s1.size() < s2.size(); });
	auto word_count = partition(words.begin(), words.end(), [size](const string& s) {return s.size() >= size; });
	auto count = word_count - words.begin();
	cout << count << ' ' << make_plural(count, "word", "s") << " of length " << size << " or longer." << endl;
	for_each(word_count, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
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
