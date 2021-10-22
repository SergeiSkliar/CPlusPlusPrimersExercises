//	Exercise 5.11: Modify our vowel - counting program so that it also counts the
//	number of blank spaces, tabs, and newlines read

#include<iostream>

int main() {
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spacesCnt = 0, tabsCnt = 0, newlineCnt = 0;
	while (std::cin.get(ch))
	{
		if (ch == 'a' || ch == 'A') {
			++aCnt;
		}
		else if (ch == 'e' || ch == 'E')
		{
			++eCnt;
		}
		else if (ch == 'i' || ch == 'I')
		{
			++iCnt;
		}
		else if (ch == 'o' || ch == 'O')
		{
			++oCnt;
		}
		else if (ch == 'u' || ch == 'U')
		{
			++uCnt;
		}
		else if (ch == '\n')
		{
			++newlineCnt;
		}
		else if (ch == ' ')
		{
			++spacesCnt;
		}
		else if (ch == '\t')
		{
			++tabsCnt;
		}
	}
	std::cout << "Number of vowels: \n"
		<< "a:\t\t" << aCnt << '\n'
		<< "e:\t\t" << eCnt << '\n'
		<< "i:\t\t" << iCnt << '\n'
		<< "o:\t\t" << oCnt << '\n'
		<< "u:\t\t" << uCnt << '\n'
		<< "spaces:\t\t" << spacesCnt << '\n'
		<< "tabs:\t\t" << tabsCnt << '\n'
		<< "newlines:\t" << newlineCnt << '\n';
}