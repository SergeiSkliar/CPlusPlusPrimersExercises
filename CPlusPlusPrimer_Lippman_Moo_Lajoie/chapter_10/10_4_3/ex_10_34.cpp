//Exercise 10.34: Use reverse_iterators to print a vector in reverse
//order.

#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9,10 };

	for (auto r_it = vec.crbegin(); r_it != vec.crend(); ++r_it)
	{
		cout << *r_it << endl;
	}
}