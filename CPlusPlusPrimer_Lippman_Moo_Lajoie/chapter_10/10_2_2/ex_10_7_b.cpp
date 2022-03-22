#include<list>
#include<vector>
#include<iostream>
#include<iterator>


using namespace std;

int main() {
	vector<int> vec;
	//vec.resize(10);
	vec.reserve(10);
	fill_n(back_inserter(vec), 10, 0);
}