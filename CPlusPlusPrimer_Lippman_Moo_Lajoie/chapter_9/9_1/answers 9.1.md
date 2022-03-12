Exercises Section 9.1
Exercise 9.1: Which is the most appropriate — a `vector`, a `deque`, or a
`list`—for the following program tasks? Explain the rationale for your choice.
If there is no reason to prefer one or another container, explain why not.
(a) Read a fixed number of words, inserting them in the container
alphabetically as they are entered. We’ll see in the next chapter that
associative containers are better suited to this problem.

_Simple way is to use `vector` and then call the library `sort` function. Another reasonable solution - using `list` for input phase, and then copy `list` into a `vector`._

(b) Read an unknown number of words. Always insert new words at the
back. Remove the next value from the front.

_`deque` - it has efficient insert/delete operations at the front and the back._

(c) Read an unknown number of integers from a file. Sort the numbers and
then print them to standard output.

_`vector` - it is more efficient for expanding its size (since the number of input data is not known in advance). After input is completed we can use `sort` function._
