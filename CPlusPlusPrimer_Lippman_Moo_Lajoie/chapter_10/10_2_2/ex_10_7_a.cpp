#include<list>
#include<vector>
#include<iostream>
#include<iterator>


using namespace std;

int main() {
	vector<int> vec; list<int> lst; int i;
	while (cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));
}
