// Write a function that returns 0 when it is first called and then
// generates numbers in sequence each time it is called again.
#include <iostream>

size_t count_calls()
{
    static size_t ctr = -1; // value will persist across calls
    return ++ctr;
}
int main()
{
    for (size_t i = 0; i != 10; ++i)
        std::cout << count_calls() << std::endl;
    return 0;
}
