Exercises Section 9.4
Exercise 9.35: Explain the difference between a `vector`’s `capacity` and its `size`.

_`capacity` shows how much memory `vector` preallocates - i.e. how many possible elements it can hold without allocating more memory. `size` shows the number of the actual elements in the `vector`_

Exercise 9.36: Can a container have a `capacity` less than its `size`?

_No, `capacity` is always at least as large as `size`._

Exercise 9.37: Why don’t `list` or `array` have a `capacity` member?

_`array` don't have `capacity` because it is fixed-size container, which can't change its size._
_`list` in its turn is not a contiguous container - adding or removing elements doesn't require that entire container to be reallocated._