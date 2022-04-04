//Exercise 10.30: Use stream iterators, sort, and copy to read a sequence
//of integers from the standard input, sort them, and then write them back to
//the standard output.

#include <string>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec;

	istream_iterator<int> inputFromcin(cin), eof;
	copy(inputFromcin, eof, inserter(vec, vec.end()));
	sort(vec.begin(), vec.end());

	for (const auto& e : vec)
	{
		cout << e << endl;
	}
}