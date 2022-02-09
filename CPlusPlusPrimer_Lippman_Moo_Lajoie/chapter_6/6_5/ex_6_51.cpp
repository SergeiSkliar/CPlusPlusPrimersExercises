//Exercise 6.51: Write all four versions of f.Each function should print a
//distinguishing message.Check your answers for the previous exercise.If your
//answers were incorrect, study this section until you understand why your
//answers were wrong.

#include <iostream>

using namespace std;
void f() { 
    cout << "empty" << endl; 
}
void f(int a) { 
    cout << "int" << endl; 
}
void f(int a, int b) { 
    cout << "int, int" << endl; 
}
void f(double a, double b = 3.14) { 
    cout << "double, double"; 
}

int main()
{
    f(2.56, 42); // more than one instance of overloaded function "f" matches the argument list
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}