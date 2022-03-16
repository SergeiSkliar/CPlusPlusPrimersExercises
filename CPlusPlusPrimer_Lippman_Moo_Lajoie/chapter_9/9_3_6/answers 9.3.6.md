Exercises Section 9.3.6
Exercise 9.31: The program on page 354 to remove even-valued elements
and duplicate odd ones will not work on a `list` or `forward_list`. Why?
Revise the program so that it works on these types as well.

_Because `list` and `forward_list` doesn't support random access to elements, i.e. `iter += 2` won't work. Possible solution in `ex_9_31.cpp`._