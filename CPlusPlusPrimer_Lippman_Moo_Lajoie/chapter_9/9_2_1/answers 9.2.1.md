Exercises Section 9.2.1
Exercise 9.3: What are the constraints on the iterators that form iterator
ranges?

_1) iterators should refer to elements of, or one past the last element of, the same container._
_2) `end` must not precede the `begin`. i.e. the `end` can be reached by incrementing the `begin`._

Exercise 9.6: What is wrong with the following program? How might you
correct it?
```c++
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),
iter2 = lst1.end();
while (iter1 < iter2) /* ... */
```

_Because relational operations only supported for a random access iterators. The `list` iterator are bidirectional access. So, `operator<` and `operator>` are not supported. Solution is to use `!=` operator._
```c++
while (iter1 != iter2) /* ... */
```
