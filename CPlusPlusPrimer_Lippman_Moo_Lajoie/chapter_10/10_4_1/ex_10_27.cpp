//Exercise 10.27: In addition to unique(§ 10.2.3, p. 384), the library
//defines function named unique_copy that takes a third iterator denoting a
//destination into which to copy the unique elements.Write a program that
//uses unique_copy to copy the unique elements from a vector into an
//initially empty list.

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main() {
	vector<int> vec;
	int n;
	list<int> lst;
	while (cin >> n)
	{
		vec.push_back(n);
	}
	sort(vec.begin(), vec.end());

	unique_copy(vec.begin(), vec.end(), back_inserter(lst));
	for_each(lst.begin(), lst.end(), [](int i) {cout << i << endl; });

}

