//Exercise 10.35: Now print the elements in reverse order using ordinary
//iterators.

#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9,10 };
	auto it = --vec.cend();
	do
	{
		// prints every element correctly but send a runtime error in the end
		// without it+1 don't print the first (last) element - 0
		// what can be done?
		cout << *it << endl;
		--it;
	}	while ((it + 1) != vec.cbegin());
}