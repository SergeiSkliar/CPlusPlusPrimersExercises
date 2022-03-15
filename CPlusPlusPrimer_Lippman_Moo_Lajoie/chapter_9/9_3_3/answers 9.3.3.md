Exercises Section 9.3.3
Exercise 9.25: In the program on page 349 that erased a range of elements, what happens if `elem1` and `elem2` are equal? What if `elem2` or both `elem1` and `elem2` are the off-the-end iterator?

_When `elem1` and `elem2` are equal nothing would happen. If `elem2` points to one past the last element then all elements from `elem1` up to, but not including `elem2` are erased. If both `elem1` and `elem2` points to one past the last element - nothing happen._