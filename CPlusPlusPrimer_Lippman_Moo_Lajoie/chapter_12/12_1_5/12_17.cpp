#include <memory>

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef std::unique_ptr<int> IntP;

    //IntP p0(ix); // no constructor
   // IntP p1(pi); // illegal. the memory is not dynamically allocated, smart pointer cannot free it
    IntP p2(pi2); // Legal. but don't use delete on pi2 - if smart pointer frees the memory, using delete on pi2 will cause UB
   // IntP p3(&ix); // illegal. same as with p1
    IntP p4(new int(2048)); // legal
    //IntP p5(p2.get()); // .get() does not make p2 release ownership of the pointer. Cause a crush of the program
}