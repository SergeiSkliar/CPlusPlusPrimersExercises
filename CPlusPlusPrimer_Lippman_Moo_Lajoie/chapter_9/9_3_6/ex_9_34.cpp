#include <vector>
#include <iostream>

int main() {
    std::vector<int> vi = { 1,2,3,4 };

    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            std::advance(iter, 2);
        }
        ++iter;
    }

    for (const auto& e : vi)
    {
        std::cout << e << ' ';
    }
}