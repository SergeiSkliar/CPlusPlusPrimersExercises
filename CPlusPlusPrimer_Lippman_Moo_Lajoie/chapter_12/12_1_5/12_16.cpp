#include <memory>
int main()
{
    std::unique_ptr<int> p1(new int(32));
    std::unique_ptr<int> p2(p1);
    //p2 = p1;

//     unique_ptr<string> p1(new string("Stegosaurus"));
// unique_ptr<string> p2(p1); // error: no copy for unique_ptr
// unique_ptr<string> p3;
// p3 = p2; // error: no assign for unique_
}