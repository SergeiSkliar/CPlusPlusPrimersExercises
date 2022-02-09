Exercises Section 6.6
Exercise 6.49: What is a candidate function? What is a viable function?

Candidate function is the one whose name matches with the function call and whose declaration is visible at the time of the call.
Viable function must have the same number of parameters as function call and whose argument type matches with parameter types (or can be converted).


Exercise 6.50: Given the declarations for f from page 242, list the viable
functions, if any for each of the following calls. Indicate which function is the
best match, or if the call is illegal whether there is no match or why the call
is ambiguous.
(a) `f(2.56, 42)` - illegal, the call is ambiguous. viable are:
```c++
void f(int, int);
void f(double, double = 3.14);
```
(b) `f(42)` - legal, `f(int)` - only viable candidate
(c) `f(42, 0)` - legal, `f(int, int)` - only viable candidate
(d) `f(2.56, 3.14)` - legal, `f(double, double = 3.14)` is the only viable candidate