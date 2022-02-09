#include<iostream>
#include<vector>

int func(int, int);

int main() {
	using func_ps = int(*)(int, int);
	std::vector<func_ps> vec_p;
}