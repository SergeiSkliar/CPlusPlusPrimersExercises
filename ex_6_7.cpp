#include <iostream>
#include <string>

int main() {

	int vowels_words = 0;
	int consonants_words = 0;
	int none_words = 0;
	std::string word;

	std::cout << "Enter words (q to quit): ";

	while (std::cin >> word && word != "q") 
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
			case 'o': case 'O': case 'u': case 'U':
				++vowels_words;
				break;
			default:
				++consonants_words;
				break;
			}
		}
		else ++none_words;
	}
	std::cout << vowels_words << " words beginning with vowels" << std::endl;
	std::cout << consonants_words << " words beginning with consonants" << std::endl;
	std::cout << none_words << " others" << std::endl;

}