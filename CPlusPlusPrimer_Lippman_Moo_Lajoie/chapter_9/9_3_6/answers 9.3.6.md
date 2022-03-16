Exercises Section 9.3.6
Exercise 9.31: The program on page 354 to remove even-valued elements
and duplicate odd ones will not work on a `list` or `forward_list`. Why?
Revise the program so that it works on these types as well.

_Because `list` and `forward_list` doesn't support random access to elements, i.e. `iter += 2` won't work. Possible solution in `ex_9_31.cpp`._

Exercise 9.32: In the program onpage 354 would it be legal to write the call
to `insert` as follows? If not, why not?

```c++
iter = vi.insert(iter, *iter++);
```

_No, because the order of evaluation inside function call is undefined. In my case program is crashed with `*iter++`._

Exercise 9.33: In the final example in this section what would happen if we
did not assign the result of insert to begin? Write a program that omits
this assignment to see if your expectation was correct.

_After `insert` the stored `begin` iterator becomes invalidated._