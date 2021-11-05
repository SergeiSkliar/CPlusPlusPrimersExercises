#include <iostream>

void showmenu();
void carnivore();
void tree();
void pianist();
void game();

int main() {

	showmenu();
	char choice;
	while (std::cin >> choice) {
		switch (choice)
		{
		case 'c':
		case 'C':
			carnivore();
			break;
		case 't':
		case 'T':
			tree();
			break;
		case 'p':
		case 'P':
			pianist();
			break;
		case 'g':
		case 'G':
			game();
			break;
		default:
			std::cout << "Please enter a c, p, t, or g: ";
		}
	}
}

void showmenu()
{
	std::cout << "Please enter one of the following choices:\n"
		"c) carnivore\tp) pianist\n"
		"t) tree\tg) game\n";
}

void carnivore()
{
	std::cout << "Cat is cute." << std::endl;
}
void tree()
{
	std::cout << "A maple is a tree." << std::endl;
}
void pianist()
{
	std::cout << "Sergei Rachmaninoff is a great russian pianist" << std::endl;
}
void game()
{
	std::cout << "You wanna play a little game?" << std::endl;
}