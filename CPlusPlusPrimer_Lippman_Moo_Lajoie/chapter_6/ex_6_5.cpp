// Write a function to return the absolute value of its argument.
#include <iostream>

using namespace std;
int absolute(int i) {
    if (i < 0) return -i;
    else return i;
}

int main()
{
    int num;
    cout << "enter a number: ";
    while (cin >> num) {
        cout << absolute(num);
        cout << "\nnew number: ";
    }

    return 0;
}