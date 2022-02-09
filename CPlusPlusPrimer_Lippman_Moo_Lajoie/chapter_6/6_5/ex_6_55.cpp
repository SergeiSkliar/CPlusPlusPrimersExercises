#include<iostream>
#include<vector>

int func(int, int);
int add(int, int);
int sub(int, int);
int mult(int, int);
int divis(int, int);

int main() {
	using func_ps = int(*)(int, int);
	std::vector<func_ps> vec_p{	add, sub, mult, divis };

}

int func(int a, int b)
{
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}

int divis(int a, int b)
{
	if (b != 0) 
		return a / b;
	else {
		std::cout << "error" << std::endl;
		return -1;
	}
}
