#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
	char* str; // points to a string
	int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
void set(stringy& arg1, char * arg2);
void show(const stringy&, int n = 1);
void show(const char *, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a reference,
	// allocates space to hold copy of testing,
	// sets str member of beany to point to the
	// new block, copies testing to new block,
	// and sets ct member of beany
	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");
	delete[] beany.str;
	return 0;
}

void set(stringy& arg1, char* arg2) {
	int size = strlen(arg2);
	arg1.ct = size;
	char* new_block = new char[size + 1];
	arg1.str = new_block;
	strcpy(new_block, arg2);
}

void show(const stringy & str, int n) {
	switch (n)
	{
	case 1:
		std::cout << "With default argument: " << std::endl;
		std::cout << "Stuct's string member: " << str.str << std::endl;
		break;
	default:
		std::cout << "With non-default argument: " << std::endl;
		for (int i = 0; i != n; ++i) {
			std::cout << "Stuct's string member: " << str.str << std::endl;
		}
		break;
	}

}

void show(const char * str, int n) {
	if (n == 1) {
		std::cout << "With default argument: " << std::endl;
		std::cout << "Array of chars: " << str << std::endl;
	}
	else {
		std::cout << "With non-default argument: " << std::endl;
		for (int i = 0; i != n; ++i) {
			std::cout << "Array of chars: " << str << std::endl;
		}
	}
}