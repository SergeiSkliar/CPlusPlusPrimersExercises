#include"Chapter6.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int f;
    cout << "Enter factorial: ";
    cin >> f;
    cout << fact(f) << endl;
    fact();
    cout << endl;
    cout << absolute(-11);
    cout << endl;
    for (size_t i = 0; i != 10; ++i)
        cout << count_calls() << endl;
}