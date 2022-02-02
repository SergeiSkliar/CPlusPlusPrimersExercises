#include<iostream>
#include<string>

int main(int argc, char* argv[]) {
	std::string buf;
	for (int i = 0; i != argc; ++i) {
		buf+=argv[i];
	}
	std::cout << buf;
}