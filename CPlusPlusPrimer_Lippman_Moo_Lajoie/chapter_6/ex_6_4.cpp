#include <iostream>

using namespace std;
void fact(){
    int i;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> i;
    if (i == 0) {
        cout << "factorial of " << i << " is " << '1' << endl;
    }
    else{
        while(i > 1) {
            fact *= i;
            --i;
        }
        cout << "factorial of " << i << " is " << fact << endl;
    }
}

int main()
{
    fact();

    return 0;
}
