//Exercise 9.31: The program on page 354 to remove even - valued elements
//and duplicate odd ones will not work on a list or forward_list.Why ?
//Revise the program so that it works on these types as well.

#include <vector>
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main() {
	
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin(); 
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter); 
			iter += 2; 
		}
		else
			iter = vi.erase(iter); 
			
	}
	for (const auto& e : vi)
	{
		cout << e << ' ';
	}
	cout << endl;

	list<int> lst = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter_list = lst.begin();

	while (iter_list != lst.end()) {
		if (*iter_list % 2) {
			iter_list = lst.insert(iter_list, *iter_list);
			advance(iter_list, 2);
		}
		else
			iter_list = lst.erase(iter_list);

	}
	cout << "list: " << endl;
	for (const auto& e : lst)
	{
		cout << e << ' ';
	}
	cout << endl;

	forward_list<int> fwd_lst = { 0,1,2,3,4,5,6,7,8,9 };
	auto curr = fwd_lst.begin();
	auto prev = fwd_lst.before_begin();

	while (curr != fwd_lst.end()) {
		if (*curr % 2) {
			curr = fwd_lst.insert_after(prev, *curr);
			prev = curr;
			++curr;
		}
		else
		{
			curr = fwd_lst.erase_after(prev);
			prev = curr;
		}

	}

	cout << "forward_list: " << endl;
	for (const auto& e : fwd_lst)
	{
		cout << e << ' ';
	}
}
