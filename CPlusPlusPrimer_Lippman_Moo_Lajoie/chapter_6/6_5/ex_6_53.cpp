#include<iostream>

int calc(char* ch1, char* ch2);
int calc(char* const ch1, char* const ch2);

int main() {
	//const char a_char = 'A';
	//const char b_char = 'B';

	//char* a = &a_char;
	//char* b = &b_char;

	char p_char = 'P';
	char q_char = 'Q';

	char* p = &p_char;
	char* q = &q_char;

	calc(p, q);
}

int calc(char* ch1, char* ch2) {
	std::cout << "plain" << std::endl;
	return *ch1 + *ch2;
}

int calc(char* const ch1, char* const ch2) {
	std::cout << "const" << std::endl;
	return *ch1 + *ch2;
}