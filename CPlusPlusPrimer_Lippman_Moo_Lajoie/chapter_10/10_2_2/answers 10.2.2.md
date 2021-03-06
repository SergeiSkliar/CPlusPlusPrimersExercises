Exercises Section 10.2.2

Exercise 10.7: Determine if there are any errors in the following programs
and, if so, correct the error(s):
(a) 
```c++
vector<int> vec; list<int> lst; int i;
while (cin >> i)
    lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());
```
_Because `vec` is empty the result of `copy` is undefined. We can use `back_inserter` or `vec.resize()`._

(b)
```c++
vector<int> vec;
vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
fill_n(vec.begin(), 10, 0);
```
_`reserve` only allocates memory, i.e. sets a `capacity` for a vector, but don't actually adds new elements. We can use either `resize` or `back_inserter`._

Exercise 10.8: We said that algorithms do not change the size of the
containers over which they operate. Why doesn’t the use of back_inserter
invalidate this claim?

_Because `back_inserter` is not an algorithm, but an iterator, which calls `push_back` member of `vector`. I.e. insertion of an element handled by the container's operation, not by the algorithm._