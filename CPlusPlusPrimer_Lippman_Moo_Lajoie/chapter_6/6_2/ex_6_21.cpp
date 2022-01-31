#include<iostream>

const int& biggest(int, int*);

int main() {
	int var = 10;
	int var2 = 12;
	int* ptr = &var2;
	std::cout << biggest(var, ptr);

}

const int& biggest(int int_obj, int* int_ptr)
{
	if (int_obj >= *int_ptr)
		return int_obj;
	else if (*int_ptr >= int_obj)
		return *int_ptr;
	// TODO: insert return statement here
}
