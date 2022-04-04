//Exercise 10.36: Use find to find the last element in a list of ints with
//value 0.

#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
	list<int> lst{ 0,1,2,3,4,5,6,7,8,0,9,10 };
	auto zero = find(lst.crbegin(), lst.crend(), 0);
	cout << *zero;
}