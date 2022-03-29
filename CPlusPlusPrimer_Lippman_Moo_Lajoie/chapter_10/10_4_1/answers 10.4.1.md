Exercises Section 10.4.1
Exercise 10.26: Explain the differences among the three kinds of insert
iterators.

_`front_inserter` creates an iterator that uses `push_front` container operation if it is supported. Likewise, `back_inserter` creates an iterator that uses `push_back` container operation. `inserter`  creates an iterator that uses `insert` container operation (it takes two arguments)._