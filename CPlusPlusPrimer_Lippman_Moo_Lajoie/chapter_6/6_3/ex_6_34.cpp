//Exercise 6.34: What would happen if the stopping condition in factorial
//were
//if (val != 0)

// result - program crash with exception "stack overflow"

#include <iostream>
using namespace std;
int factorial(int val)
{
    if (val != 0)
        return factorial(val-1) * val;
    return 1;
}
int main() {
    int v;
    while (cin >> v) {

        cout << factorial(v) << endl;
    }

}