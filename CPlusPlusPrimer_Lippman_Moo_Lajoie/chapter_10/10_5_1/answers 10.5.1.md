Exercises Section 10.5.1
Exercise 10.38: List the five iterator categories and the operations that each
supports.

_Input iterator - only read elements. `!=`, `==`, `++`, `->`.
Output iterator - only write elements `++`, `*`.
Forward iterator - read and write elements only in one direction.
Bidirectional iterator - read and write in both directions. supports also `--`.
Random-access iterator - constant-time access to any position in a sequence. `<=, >=, <, >, +, +=, -, -=, iter[n]`._

Exercise 10.39: What kind of iterator does a `list` have? What about a
`vector`?

_Bidirectional for `list` and random-access for `vector`._

Exercise 10.40: What kinds of iterators do you think `copy` requires? What
about `reverse` or `unique`?

_`copy` require two input operators and one output.
`reverse` require bidirectional iterator.
`unique` require forward iterator._