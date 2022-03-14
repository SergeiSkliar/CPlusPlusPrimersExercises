Exercises Section 9.2.4

Exercise 9.12: Explain the differences between the constructor that takes a
container to copy and the constructor that takes two iterators.

_In the case of copying one container into another their types and element types must match. For the constructor that takes two iterators the element types must be compatible (like `int` with `double` - they are compatible/convertible)._

Exercise 9.13: How would you initialize a vector<double> from a
list<int>? From a vector<int>? Write code to check your answers.

```c++
list<int> lst;
vector<double> dbl_vec(lst.begin(), lst.end());

vector<int> int_vec;
vector<double> dbl_vec(int_vec.begin(), int_vec.end());
```