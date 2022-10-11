// //Exercise 12.25: Given the following new expression, how would you
// delete pa?
// int *pa = new int[10];

#include <iostream>

int main()
{
    int *pa = new int[10];
    delete [] pa;
}