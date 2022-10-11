#include <iostream>

int main()
{
    // straightforward solution: user enters a number that indicates the length of the string.
    // use this number to create a dynamic char array.
    // drawback: if the string is longer than an array size, every character at the position greater than
    // an array size is discarded.
    std::cout << "Enter the string size: ";
    size_t len;
    std::cin >> len;
    std::cin.ignore();
    std::cout << "You entered " << len << std::endl;

    char* char_arr = new char[len + 1];
    std::cin.get(char_arr, len+1);

    std::cout << "Your char array: " << char_arr << std::endl;
}