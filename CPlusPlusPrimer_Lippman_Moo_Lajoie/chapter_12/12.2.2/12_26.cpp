#include <iostream>
#include <string>
#include <memory>

int main()
{
    std::allocator<std::string> alloc_str;

    size_t num = 10;

    auto p = alloc_str.allocate(num);
    std::string s;
    std::string *q = p;

    while (std::cin >> s && q != p + num)
    {
        alloc_str.construct(q++, s);
    }

    size_t size = q - p;

    for (auto pos = p; pos != q; ++pos)
    {
        std::cout << *pos << std::endl;
    }

    while (q != p)
    {
        alloc_str.destroy(--q);
    }
    alloc_str.deallocate(p, num);
}
