Exercises Section 9.3.1
Exercise 9.21: Explain how the loop from page 345 that used the return
from `insert` to add elements to a `list` would work if we inserted into a
`vector` instead.

_Each iteration of the loop the new element is inserted in front of the element denoted by `iter`. All elements in `vector` starting from `iter` moved to the right (except for the case when `iter` points to the one past the last element - then it is analogous to executing `push_back` member). The value (iterator) returned by `insert` is assigned to `iter`, making `iter` point to this new element. The larger the `vector`, the higher the overhead._

Exercise 9.22: Assuming `iv` is a `vector` of `int`s, what is wrong with the
following program? How might you correct the problem(s)?

```c++
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
while (iter != mid)
    if (*iter == some_val)
        iv.insert(iter, 2 * some_val);
```

