//Exercise 10.37: Given a vector that has ten elements, copy the elements
//from positions 3 through 7 in reverse order to a list.

#include <list>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9,10 };
	list<int> lst;
	copy(vec.crbegin()+3, vec.crend()-3, back_inserter(lst));

	for (const auto& e : lst)
	{
		cout << e << endl;
	}
}