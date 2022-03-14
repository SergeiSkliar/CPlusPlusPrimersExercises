Exercises Section 9.2.3
Exercise 9.9: What is the difference between the `begin` and `cbegin`
functions?

_`cbegin` returns the `const_iterator` regardless of the type of the container. `begin` is an overloaded member function, which returns `iterator` if we call this member function on the non`const` container and returns `const_iterator` if we call it on the `const` container._

Exercise 9.10: What are the types of the following four objects?
```c++
vector<int> v1; // vector of ints
const vector<int> v2; // const vector of non-const ints
auto it1 = v1.begin(), it2 = v2.begin(); // it1 - vector<int>::iterator, it2 - const_iterator
auto it3 = v1.cbegin(), it4 = v2.cbegin(); // it3 - const_iterator, it4 - const_iterator

it1 - vector<int>::iterator
it2 - vector<int>::const_iterator
it3 - vector<int>::const_iterator
it4 - vector<int>::const_iterator
```

