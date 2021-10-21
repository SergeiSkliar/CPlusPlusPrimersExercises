//	Exercise 5.9: Write a program using a series of if statements to count the
//	number of vowels in text read from cin.

#include<iostream>
#include<string>

int main() {
	char ch;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while (std::cin >> ch) 
	{
		if (ch == 'a') {
			++aCnt;
		}
		else if (ch == 'e') 
		{
			++eCnt;
		}
		else if (ch == 'i') 
		{
			++iCnt;
		}
		else if (ch == 'o')
		{
			++oCnt;
		}
		else if (ch == 'u')
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