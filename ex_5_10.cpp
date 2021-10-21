//	Exercise 5.10: There is one problem with our vowel - counting program as
//	we’ve implemented it : It doesn’t count capital letters as vowels.Write a
//	program that counts both lower - and uppercase letters as the appropriate
//	vowel—that is, your program should count both 'a' and 'A' as part of
//	aCnt, and so forth.

#include<iostream>
#include<string>

int main() {
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (std::cin >> ch)
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
	}
	std::cout << "Number of vowels: \n"
		<< "a: " << aCnt << '\n'
		<< "e: " << eCnt << '\n'
		<< "i: " << iCnt << '\n'
		<< "o: " << oCnt << '\n'
		<< "u: " << uCnt << '\n';
}