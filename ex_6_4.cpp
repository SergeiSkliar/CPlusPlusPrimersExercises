#include <iostream>
#include <array>

const int strsize = 80;

// Benevolent Order of Programmers name structure
struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; // job title
	char bopname[strsize]; // secret BOP name
	int preference; // 0 = fullname, 1 = title, 2 = bopname
};

void showmenu();
//void by_name(const std::array<bop, 4U>& arr);
//void by_title();
//void by_bop();
//void by_pref();

int main() {

	showmenu();
	char choice;
	std::array<bop, 4> persons = { {
		{ "Arthur Dent", "Junior engineer", "Hitchhiker", 0 },
		{ "Ford Prefect", "Senior engineer", "Writer", 2 },
		{ "Tricia Marie McMillan", "CEO", "Trillian Astra", 2 },
		{ "Zaphod Beeblebrox", "President", "Two-headed", 1 }
		} };

	while (std::cin >> choice && choice != 'q') {
		choice = tolower(choice);
		switch (choice)
		{
		case 'a':
			for (int i = 0; i != 4; ++i)
			{
				std::cout << persons[i].fullname << std::endl;
			}
			break;
		case 'b':
			for (int i = 0; i != 4; ++i)
			{
				std::cout << persons[i].title << std::endl;
			}
			break;
		case 'c':
			for (int i = 0; i != 4; ++i)
			{
				std::cout << persons[i].bopname << std::endl;
			}
			break;
		case 'd':
			for (int i = 0; i != 4; ++i)
			{
				switch (persons[i].preference)
				{
				case 0: std::cout << persons[i].fullname << std::endl; break;
				case 1: std::cout << persons[i].title << std::endl; break;
				case 2: std::cout << persons[i].bopname << std::endl; break;
				}
			}
			break;
		default:
			std::cout << "Please enter a a, b, c, d or q: ";
			break;
		}
	}

}

void showmenu()
{
	std::cout << "Please enter 1, 2, 3, 4, or 5:\n"
		"a. display by name\tb. display by title\n"
		"c. display by bopname\td. display by preference\n"
		"q. quit\n";
}

//NB : try to rewrite later, using functions 

//void by_name(const std::array<bop, 4U>& arr)
//{
//	
//}
//
//void by_title() 
//{
//
//}
//void by_bop()
//{
//
//}
//void by_pref()
//{
//
//}