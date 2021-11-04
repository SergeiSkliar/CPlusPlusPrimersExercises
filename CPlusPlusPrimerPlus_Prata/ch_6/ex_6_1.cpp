#include <iostream>
#include <cctype>

int main() {
	char ch;
	
	while (std::cin.get(ch) && ch != '@')
	{
		if (std::isalpha(ch))
		{
			if (islower(ch))
			{
				ch = toupper(ch);
			}
			else if (isupper(ch))
			{
				ch = tolower(ch);
			}
		}
		else
		{
			continue;
		}
		std::cout << ch;
	}
}