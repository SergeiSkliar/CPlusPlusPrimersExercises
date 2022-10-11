#include <string>
#include <iostream>
#include <cstring>

int main()
{
    const char* c1 = "First ";
    const char* c2 = "Second";

    char* c3 = new char[strlen(c1) + strlen(c2) + 1];

    strcat(c3, c1);
    strcat(c3, c2);

    std::cout << c3 << std::endl;
    delete [] c3;

    std::string s1 = "First ";
    std::string s2 = "Second";

    std::string s3 = s1 + s2;
    std::cout << s3 << std::endl;
}