//Write and test your own version of reset that takes a
//reference.

#include <iostream>

using namespace std;

void reset(int& i) {
    i = 0;
}

int main()
{
    int value = 42;
    reset(value);
    cout << value;

    return 0;
}
