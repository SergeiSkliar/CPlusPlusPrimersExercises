//Exercise 10.22: Rewrite the program to count words of size 6 or less using
//functions in place of the lambdas.

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;
using std::placeholders::_1;

void printVec(vector<string>& w);
bool check_size(const string& s, const string::size_type sz);

int main() {
	vector<string> words;
	string s;
	while (cin >> s)
	{
		words.push_back(s);
	}
	printVec(words);
	string::size_type size = 6;
	auto count = count_if(words.begin(), words.end(), bind(check_size, _1, size));

	cout << "\n" << count;
}

void printVec(vector<string>& w)
{
	for (const auto& e : w)
	{
		cout << e << ' ';
	}
	cout << endl;
}

bool check_size(const string& s, const string::size_type sz)
{
	return s.size() <= sz;
}