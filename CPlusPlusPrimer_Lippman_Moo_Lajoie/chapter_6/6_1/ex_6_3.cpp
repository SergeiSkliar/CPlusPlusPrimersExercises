#include <iostream>

using namespace std;
int fact(int i){
    if (i == 0) return 1;
    else{
        int temp = 1;
        while(i > 1) {
            temp *= i;
            --i;
        }
        return temp;
    }
}

int main()
{
    int f;
    cout<<"Enter factorial: ";
    cin >> f;
    cout << fact(f);

    return 0;
}