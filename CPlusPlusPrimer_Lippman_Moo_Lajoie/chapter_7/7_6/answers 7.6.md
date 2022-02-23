Exercises Section 7.6
Exercise 7.56: What is a static class member? What are the advantages
of static members? How do they differ from ordinary members?

_`static` class member associated with class itself, not with the objects of the class.
The advantages is: 1) efficiency - such member is instantiated once and shared among all objects of the class rather than created each time the new object is created; 2) maintanability - one entity is easier to maintain.
Differences from ordinary members: 1) it exists independently of any other object; 2) it can have incomplete type; 3) can be used as a default argument._

Exercise 7.58: Which, if any, of the following static data member
declarations and definitions are errors? Explain why.
```c++
// example.h
class Example {
public:
    static double rate = 6.5; // can't initialize static member inside class body
    static const int vecSize = 20;
    static vector<double> vec(vecSize); // again can't initialize static member inside class body
};
// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;

// vecSize is not defined outside class body;
```
_Corrections in .h and .c files._