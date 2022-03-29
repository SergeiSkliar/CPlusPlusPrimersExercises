//Exercise 10.25: In the exercises for § 10.3.2 (p. 392) you wrote a version
//of biggies that uses partition.Rewrite that function to use
//check_size and bind.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
bool check_size(const string& s, const string::size_type sz);
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
	biggies(words, 7);
	printVec(words);

}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string& s1, const string& s2) {return s1.size() < s2.size(); });
	auto word_count = partition(words.begin(), words.end(), bind(check_size, std::placeholders::_1, size));
	auto count = word_count - words.begin();
	cout << count << ' ' << make_plural(count, "word", "s") << " of length " << size << " or longer." << endl;
	for_each(word_count, words.end(), [](const string& s) {cout << s << " "; });
	cout << endl;
}

void elimDups(vector<string>& w)
{
	std::sort(w.begin(), w.end());
	auto end_unique = std::unique(w.begin(), w.end());
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

bool check_size(const string& s, std::string::size_type sz) {
	return s.size() >= sz;
}