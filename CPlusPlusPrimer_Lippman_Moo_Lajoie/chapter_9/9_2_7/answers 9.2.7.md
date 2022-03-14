Exercise 9.17: Assuming `c1` and `c2` are containers, what (if any)
constraints does the following usage place on the types of `c1` and `c2`?
```c++
if (c1 < c2)
```

_`c1` and `c2` must exactly match - the type of containers and the type of elements must be the same._
_Also the relational operators (specifically `<`) must be defined for this type of containers._
_E.g., if we consider the STL containers, `c1` and `c2`  cannot be the unordered associative containers - relational operators (like `<`) not defined for them._