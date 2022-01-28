// Using pointers, write a function to swap the values of two
// ints. Test the function by calling itand printing the swapped values.

#include <iostream>

using namespace std;

void swap(int* i1, int* i2) {
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}

int main()
{
    int num = 10;
    int num2 = 15;
    cout << num << " " << num2 << endl;

    swap(num, num2);
    cout << num << " " << num2 << endl;

    return 0;
}