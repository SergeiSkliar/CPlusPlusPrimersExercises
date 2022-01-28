//Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210)
//to use references instead of pointers to swap the value of two ints

#include <iostream>

using namespace std;

void swap(int& i1, int& i2) {
    int temp = i1;
    i1 = i2;
    i2 = temp;
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