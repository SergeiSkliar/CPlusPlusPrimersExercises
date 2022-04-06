//Exercise 10.42: Reimplement the program that eliminated duplicate words
//that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.

#include<vector>
#include<list>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void elimDups(list<string>& w);
void printList(list<string>& w);

int main() {
	list<string> words;
	string s;
	while (cin >> s)
	{
		words.push_back(s);
	}
	printList(words);
	elimDups(words);
	printList(words);
}

void elimDups(list<string>& w)
{
	w.sort();
	printList(w);
	w.unique();
}

void printList(list<string>& w)
{
	for (const auto& e : w)
	{
		cout << e << ' ';
	}
	cout << endl;
}