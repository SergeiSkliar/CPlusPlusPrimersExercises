#include<iostream>

void swapIntPtr(int**, int**);

int main() {
	int var1 = 10;
	int var2 = 15;
	int* ptr1 = &var1;
	int* ptr2 = &var2;
	std::cout << *ptr1 << '\t' << *ptr2 << std::endl;
	std::cout << ptr1 << '\t' << ptr2 << std::endl;
	swapIntPtr(&ptr1, &ptr2);
	std::cout << *ptr1 << '\t' << *ptr2 << std::endl;
	std::cout << ptr1 << '\t' << ptr2 << std::endl;
}

void swapIntPtr(int** p1, int** p2) {
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}