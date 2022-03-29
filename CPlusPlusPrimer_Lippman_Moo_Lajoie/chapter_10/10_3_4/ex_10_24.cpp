//Exercise 10.24: Use bind and check_size to find the first element in a
//vector of ints that has a value greater than the length of a specified
//string value.

// unfinished

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;
using std::placeholders::_1;

void printVec(vector<int>& v);
bool check_size(const string& s, const string::size_type sz);

int main() {
	vector<int> numbers;
	int num;
	while (cin >> num)
	{
		numbers.push_back(num);
	}
	printVec(numbers);
	string s = "greater";
	auto count = find_if(numbers.begin(), numbers.end(), bind(check_size, s, _1));

	cout << *count;
}

void printVec(vector<int>& v)
{
	for (const auto& e : v)
	{
		cout << e << ' ';
	}
	cout << endl;
}

bool check_size(const string& s, const string::size_type sz)
{
	return s.size() <= sz;
}