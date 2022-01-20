#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

namespace buff {
	const int BUF = 512;
	char buffer[BUF];
}


int main() {
	const int NUM = 2;
	chaff* pointer = new (buff::buffer) chaff[NUM];
	for (int i = 0; i < NUM; i++) {
		char dross_temp[20];
		int slag_temp;
		std::cout << "Enter dross of " << i+1 << "'th element: ";
		std::cin >> dross_temp;
		strcpy(pointer[i].dross, dross_temp);
		std::cout << "Enter slag for " << i + 1 << "'th element: ";
		std::cin >> pointer[i].slag;
	}

	for (int i = 0; i < NUM; i++) {
		std::cout << "Dross of " << i + 1 << " element: " << pointer[i].dross << std::endl;
		std::cout << "Slag of " << i + 1 << " element: " << pointer[i].slag << std::endl;
	}
}