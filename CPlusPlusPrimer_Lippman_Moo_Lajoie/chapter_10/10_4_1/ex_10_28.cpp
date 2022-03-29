//Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive,
//into three other containers.Use an inserter, a back_inserter, and a
//front_inserter, respectivly to add elements to these containers.Predict
//how the output sequence varies by the kind of inserter and verify your
//predictions by running your programs.

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;

void printDeque(const deque<int>& d);

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	deque<int> d1, d2, d3;

	copy(vec.begin(), vec.end(), inserter(d1, d1.end()));
	printDeque(d1);
	copy(vec.begin(), vec.end(), back_inserter(d2));
	printDeque(d2);
	copy(vec.begin(), vec.end(), front_inserter(d3));
	printDeque(d3);
}

void printDeque(const deque<int>& d)
{
	for (const auto& e : d)
	{
		cout << e << " ";
	}
	cout << endl;
}