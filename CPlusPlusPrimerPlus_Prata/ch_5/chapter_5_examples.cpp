// forstr2.cpp -- reversing an array, experiment just for fun

//#include <iostream>
//#include <string>
//
//int main()
//{
//    std::string str;
//    std::cout << "Enter a word: ";
//    std::cin >> str;
//
//    char temp;
//
//    for (int i = str.size() - 1, j = 0; j != i; ++j, --i) {
//        temp = str[i];
//        str[i] = str[j];
//        str[j] = temp;
//    }
//
//    std::cout << str;
//
//    return 0;
//}

// compstr1.cpp -- comparing strings using arrays
//
//#include <iostream>
//#include <cstring>
//
//int main() {
//	char word[5] = "?ate";
//
//	for (char ch = 'a'; std::strcmp(word, "mate"); ++ch) {
//		std::cout << word << std::endl;
//		word[0] = ch;
//	}
//
//	std::cout << word << std::endl;
//}
//
//// textin3.cpp -- reading chars to end of file
//#include <iostream>
//int main()
//{
//	char ch;
//	int count = 0;
//	std::cin.get(ch); // attempt to read a char
//	while (std::cin.fail() == false) // test for EOF
//	{
//		std::cout << ch; // echo character
//		++count;
//		std::cin.get(ch); // attempt to read another char
//	}
//	std::cout << std::endl << count << " characters read\n";
//	return 0;
//}

//#include <iostream>
//const int Cities = 5;
//const int Years = 4;
//int main()
//{
//	using namespace std;
//	const char* cities[Cities] = // array of pointers
//	{ // to 5 strings
//	"Gribble City",
//	"Gribbletown",
//	"New Gribble",
//	"San Gribble",
//	"Gribble Vista"
//	};
//	int maxtemps[Years][Cities] = // 2-D array
//	{
//	{96, 100, 87, 101, 105}, // values for maxtemps[0]
//	{96, 98, 91, 107, 104}, // values for maxtemps[1]
//	{97, 101, 93, 108, 107}, // values for maxtemps[2]
//	{98, 103, 95, 109, 108} // values for maxtemps[3]
//	};
//	cout << "Maximum temperatures for 2008 - 2011\n\n";
//	for (int city = 0; city < Cities; ++city)
//	{
//		cout << cities[city] << ":\t";
//		for (int year = 0; year < Years; ++year)
//			cout << maxtemps[year][city] << "\t";
//		cout << endl;
//	}
//	// cin.get();
//	return 0;
//}