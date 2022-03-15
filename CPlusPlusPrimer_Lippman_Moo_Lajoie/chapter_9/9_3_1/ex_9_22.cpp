#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

int main() {
    vector<int> iv = { 1,2,3,4,5,6 };
    int some_val = 3;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    while (iter != mid)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);
            ++iter;
            mid = iv.begin() + iv.size() / 2;
        }
        else ++iter;
    }

    for (const auto& e : iv)
    {
        std::cout << ' ' << e << ' ';
    }
}