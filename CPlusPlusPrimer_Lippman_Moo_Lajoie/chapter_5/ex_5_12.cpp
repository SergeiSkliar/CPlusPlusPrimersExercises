//	Exercise 5.12: Modify our vowel - counting program so that it counts the
//	number of occurrences of the following two - chCurrentaracter sequences : ff, fl,
//	and fi.

#include<iostream>

int main() {

	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spacesCnt = 0, tabsCnt = 0, newlineCnt = 0;
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	//bool fFlag;
	char chLast, chCurrent;
	std::cin.get(chCurrent);
	chLast = chCurrent;
	while (std::cin.get(chCurrent))
	{
		{
			if (chCurrent == 'a' || chCurrent == 'A') 
			{
				++aCnt;
			}
			else if (chCurrent == 'e' || chCurrent == 'E')
			{
				++eCnt;
			}
			else if (chCurrent == 'i' && chLast == 'f')
			{
				++iCnt;
				++fiCnt;
			}
			else if (chCurrent == 'I')
			{
				++iCnt;
			}
			else if (chCurrent == 'o' || chCurrent == 'O')
			{
				++oCnt;
			}
			else if (chCurrent == 'u' || chCurrent == 'U')
			{
				++uCnt;
			}
			else if (chCurrent == '\n')
			{
				++newlineCnt;
			}
			else if (chCurrent == ' ')
			{
				++spacesCnt;
			}
			else if (chCurrent == '\t')
			{
				++tabsCnt;
			}
			else if (chCurrent == 'l' && chLast == 'f') 
			{

				++flCnt;
			}
			else if (chCurrent == 'f' && chLast == 'f') 
			{
				++ffCnt;
			}
		}
		chLast = chCurrent;
	}
	std::cout << "Number of vowels: \n"
		<< "a:\t\t" << aCnt << '\n'
		<< "e:\t\t" << eCnt << '\n'
		<< "i:\t\t" << iCnt << '\n'
		<< "o:\t\t" << oCnt << '\n'
		<< "u:\t\t" << uCnt << '\n'
		<< "spaces:\t\t" << spacesCnt << '\n'
		<< "tabs:\t\t" << tabsCnt << '\n'
		<< "newlines:\t" << newlineCnt << '\n'
		<< "ff:\t\t" << ffCnt << '\n'
		<< "fl:\t\t" << flCnt << '\n'
		<< "fi:\t\t" << fiCnt << '\n';
}