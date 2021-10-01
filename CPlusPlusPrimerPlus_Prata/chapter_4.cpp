
/*#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; // empty array
	char name2[Size] = "C++owboy"; // initialized array
	// NOTE: some implementations may require the static keyword
	// to initialize the array name2
	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0'; // set to null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;

	return 0;
}*/

/*#include <iostream>
int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	(cin >> year).get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}*/

/*#include <iostream>
#include <string>
#include <cstring>

int main() {
	using namespace std;
	char charr[20]{};
	string str;

	cout << strlen(charr) << endl;
	cout << str.size() << endl;
	cout << "array: " << endl;
	cin.getline(charr, 20);
	cout << "string: " << endl;
	getline(cin, str);
	cout << strlen(charr) << endl;
	cout << str.size() << endl;
}*/


/*#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable gifts[100];
	//cin >> gifts[0].volume; // use volume member of first struct
	cout << sizeof(gifts) / sizeof(*gifts) << endl;
	return 0;
}*/

/*#include <iostream>

int main() {
	using namespace std;
	int one = 4;
	double two = 5.5;

	cout << "one value " << one;
	cout << " one address " << &one << endl;
	cout << "two value " << two;
	cout << " two address " << &two << endl;
}*/
//#pragma warning(disable : 4996)
//#include <iostream>
//#include <cstring>
//using namespace std;
//char* getname(void);
//int main() {
//
//	//int nights = 1001;
//	//int* pt = new int; // allocate space for an int
//	//*pt = 1001; // store the value there
//	//cout.setf(ios_base::fixed, ios_base::floatfield);
//	//cout << "nights value: " << nights;
//	//cout << ": location " << &nights << endl;
//	//cout << "int: value: " << *pt << ": location " << pt << endl;
//
//	//double* pd = new double;
//	//*pd = 1000001.3434;
//
//	//cout << "double value: " << *pd << ": location " << pd << endl;
//	//cout << "location of a pointer pd: " << &pd << endl;
//	//
//	//cout << "size of pt = " << sizeof(pt);
//	//cout << ": size of *pt = " << sizeof(*pt) << endl;
//
//	//cout << "size of pd = " << sizeof(pd);
//	//cout << ": size of *pd = " << sizeof(*pd) << endl;
//
//	//double wages[3]{ 10000.0, 20000.0, 30000.0 };
//	//short stacks[3]{ 3,2,1 };
//
//	//double* pw = wages;
//	//short* ps = &stacks[0];
//
//	//cout << "pw = " << pw << "	*pw = " << *pw << endl;
//	//pw = pw + 1;
//	//cout << "add 1 to pw: " << "pw = " << pw << "	*pw = " << *pw << endl;
//
//	//cout << "ps = " << ps << "	*ps = " << *ps << endl;
//	//ps = ps + 1;
//	//cout << "add 1 to ps: " << "ps = " << ps << "	*ps = " << *ps << endl;
//
//	//cout << "access two elements with array notation\n";
//	//cout << "stacks[0] = " << stacks[0]
//	//	<< ", stacks[1] = " << stacks[1] << endl;
//	//cout << "access two elements with pointer notation\n";
//	//cout << "*stacks = " << *stacks
//	//	<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
//	//cout << sizeof(wages) << " = size of wages array\n";
//	//cout << sizeof(pw) << " = size of pw pointer\n";
//
//	char* name;
//	name = getname();
//	cout << name << " at " << (int*)name << '\n';
//	delete[] name;
//
//	name = getname();
//	cout << name << " at " << (int*)name << '\n';
//	delete[] name;
//
//	return 0;
//}
//
//char* getname() {
//	char temp[80];
//	cout << "Enter last name: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);
//	return pn;
//}

//#include <iostream>
//#include <string>
//
//int main() {
//	std::string f_name, l_name;
//	char grade;
//	int age;
//	std::cout << "What is your first name? ";
//	//std::cin >> f_name;
//	std::getline(std::cin, f_name);
//	std::cout << std::endl;
//	std::cout << "What is your last name? ";
//	std::cin >> l_name;
//	std::cout << std::endl;
//	std::cout << "What is your grade? ";
//	std::cin >> grade;
//	std::cout << std::endl;
//	std::cout << "What is your age? ";
//	std::cin >> age;
//	std::cout << std::endl;
//
//	std::cout << "Name: " << l_name << ", " << f_name << std::endl;
//	std::cout << "Grade: " << grade << std::endl;
//	std::cout << "Age: " << age << std::endl;
//
//}
//#pragma warning(disable : 4996)
//#include <iostream>
//#include <string>
//#include <cstring>
//
//int main() {
//	const int size = { 80 };
//	char f_name[size], l_name[size];
//	//char full_name[size * 2 + 3];
//
//	std::cout << "Enter first name: ";
//	std::cin.getline(f_name, size);
//	//std::cout << std::endl;
//
//	std::cout << "Enter last name: ";
//	std::cin.getline(l_name, size);
//	//std::cout << std::endl;
//
//	strcat(l_name, ", ");
//	strcat(l_name, f_name);
//
//	std::cout << "Here's the information in a single string: " << l_name << std::endl;
//
//	std::string f_name_s, l_name_s;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//struct CandyBar {
//	std::string name;
//	double weight;
//	int calories;
//};
//
//int main() {
//	CandyBar snacks[3]{ { "Mocha Munch", 2.3, 350 }, {"KitKat", 2.5, 300}, {"MARS", 2.4, 300} };
//	std::cout << "Name: " << snacks[0].name << " weight: " << snacks[0].weight << " calories: " << snacks[0].calories << std::endl;
//	std::cout << "Name: " << snacks[1].name << " weight: " << snacks[1].weight << " calories: " << snacks[1].calories << std::endl;
//	std::cout << "Name: " << snacks[2].name << " weight: " << snacks[2].weight << " calories: " << snacks[2].calories << std::endl;;
//
//}

//#include <iostream>
//#include <string>
//
//struct PizzaCom {
//	std::string name;
//	double diam;
//	double weight;
//};
//
//int main() {
//	PizzaCom pizza;
//	std::cout << "Enter pizza name: ";
//	std::getline(std::cin, pizza.name);
//	std::cout << "\nEnter diameter: ";
//	std::cin >> pizza.diam;
//	std::cout << "\nEnter weight: ";
//	std::cin >> pizza.weight;
//
//	std::cout << pizza.name << pizza.diam << pizza.weight;
//}

//#include <iostream>
//#include <string>
//
//struct PizzaCom {
//	std::string name;
//	double diam;
//	double weight;
//};
//
//int main() {
//	PizzaCom* pizza = new PizzaCom();
//
//	//
//	std::cout << "\nEnter diameter: ";
//	(std::cin >> pizza->diam).get();
//	//std::cin >> pizza->diam;
//	std::cout << "Enter pizza name: ";
//	std::getline(std::cin, pizza->name);
//	//std::cin >> pizza->name;
//	std::cout << "\nEnter weight: ";
//	std::cin >> pizza->weight;
//	std::cout << pizza->name << pizza->diam << pizza->weight;
//	delete pizza;
//}

//#include <iostream>
//#include <string>
//
//struct CandyBar {
//	std::string name;
//	double weight;
//	int calories;
//};
//
//int main() {
//	CandyBar* snacks = new CandyBar[3];
//
//	snacks[0].name = "Mocha Munch";
//	snacks[0].weight = 2.3;
//	snacks[0].calories = 350;
//
//	snacks[1].name = "KitKat";
//	snacks[1].weight = 2.5;
//	snacks[1].calories = 300;
//
//	snacks[2].name = "MARS";
//	snacks[2].weight = 2.4;
//	snacks[2].calories = 300;
//
//	std::cout << "Name: " << snacks[0].name << " weight: " << snacks[0].weight << " calories: " << snacks[0].calories << std::endl;
//	std::cout << "Name: " << snacks[1].name << " weight: " << snacks[1].weight << " calories: " << snacks[1].calories << std::endl;
//	std::cout << "Name: " << snacks[2].name << " weight: " << snacks[2].weight << " calories: " << snacks[2].calories << std::endl;;
//	delete[] snacks;
//}

//#include <iostream>
//#include <array>
//
//int main() {
//	std::array<double, 3> dash;
//
//	std::cout << "Enter 40 m dash three times" << "\n1: ";
//	std::cin >> dash[0];
//	std::cout << "\n2: ";
//	std::cin >> dash[1];
//	std::cout << "\n3: ";
//	std::cin >> dash[2];
//
//	//double mult = 1;
//	double mult = dash[0] * dash[1] * dash[2];
//	std::cout << "times " << mult;
//
//	double avg = (dash[0] + dash[1] + dash[2]) / 2;
//	std::cout << "average " << avg;
//}