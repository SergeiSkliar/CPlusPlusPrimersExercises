//Exercise 10.9: Implement your own version of elimDups.Test your
//program by printing the vector after you read the input, after the call to
//unique, and after the call to erase.

#include<vector>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

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
	elimDups(words);
	printVec(words);
}

void elimDups(vector<string>& w)
{
	sort(w.begin(), w.end());
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