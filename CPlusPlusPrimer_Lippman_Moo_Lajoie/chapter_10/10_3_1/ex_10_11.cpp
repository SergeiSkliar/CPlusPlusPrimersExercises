//Exercise 10.11: Write a program that uses stable_sort and isShorter
//to sort a vector passed to your version of elimDups.Print the vector to
//verify that your program is correct.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool isShorter(const string& s1, const string& s2);
void elimDups(vector<string>& w);
void printVec(vector<string>& w);

int main() {
	vector<string> words;
	string s;
	while (cin >> s)
	{
		words.push_back(s);
	}
	printVec(words);
	stable_sort(words.begin(), words.end(), isShorter);
	printVec(words);
	elimDups(words);
	printVec(words);
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