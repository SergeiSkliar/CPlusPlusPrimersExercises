//	Exercise 5.14: Write a program to read strings from standard input
//	looking for duplicated words.The program should find places in the input
//	where one word is followed immediately by itself.Keep track of the largest
//	number of times a single repetition occurs and which word is repeated.Print
//	the maximum number of duplicates, or else print a message saying that no
//	word was repeated.For example, if the input is
//	how now now now brown cow cow
//	the output should indicate that the word now occurred three times.

#include<iostream>
#include<string>
#include<vector>

int main() {
	std::string word = "", previous_word = "", max_repeat_word = "";
	int repeat_cnt = 0, max_repeat = 0;

	while (std::cin >> word) 
	{
		if (word == previous_word) 
		{
			++repeat_cnt;
		}
		else 
		{
			previous_word = word;
			repeat_cnt = 1;
		}

		if (max_repeat < repeat_cnt) 
		{
			max_repeat = repeat_cnt;
			max_repeat_word = word;
		}
	}

	if (max_repeat <= 1) 
	{
		std::cout << "No word was repeated.";
	}
	else 
	{
		std::cout << "The word " << max_repeat_word << " occured " << max_repeat << " times.";
	}
		
}